#include <iostream>
#include <thread>
#include <unordered_map>
#include <map>
#include <vector>
#include <queue>
#include <mutex>
#include <set>
#include <fstream>
#include <chrono>
#include <ctime>
#include <string>

class User {
public:
    std::string userId;
    std::string name;
    User(std::string id, std::string n) : userId(id), name(n) {}
    virtual void menu() = 0;
};

class Buyer : public User {
public:
    Buyer(std::string id, std::string name) : User(id, name) {}
    void menu() override {
        std::cout << "Buyer Menu: You can place bids.\n";
    }
};

class Seller : public User {
public:
    Seller(std::string id, std::string name) : User(id, name) {}
    void menu() override {
        std::cout << "Seller Menu: You can create auctions.\n";
    }
};

struct Bid {
    std::string bidderId;
    double amount;
    std::chrono::system_clock::time_point timestamp;

    Bid(std::string id, double amt) : bidderId(id), amount(amt), timestamp(std::chrono::system_clock::now()) {}

    bool operator<(const Bid& other) const {
        return amount < other.amount;
    }
};

class Auction {
public:
    std::string itemId;
    std::string sellerId;
    double minPrice;
    bool active;
    std::priority_queue<Bid> bids;
    std::set<std::string> activeBidders;
    std::mutex auctionMutex;
    std::chrono::system_clock::time_point endTime;

    Auction(std::string item, std::string seller, double price, int durationSeconds)
        : itemId(item), sellerId(seller), minPrice(price), active(true) {
        endTime = std::chrono::system_clock::now() + std::chrono::seconds(durationSeconds);
    }

    bool isActive() {
        std::lock_guard<std::mutex> lock(auctionMutex);
        return active && std::chrono::system_clock::now() < endTime;
    }

    void placeBid(const Bid& bid) {
        std::lock_guard<std::mutex> lock(auctionMutex);
        if (isActive() && bid.amount >= minPrice) {
            bids.push(bid);
            activeBidders.insert(bid.bidderId);
            std::cout << "Bid placed: " << bid.bidderId << " -> $" << bid.amount << std::endl;
            logBid(bid);
        } else {
            std::cout << "Bid rejected for item " << itemId << std::endl;
        }
    }

    void closeAuction() {
        std::lock_guard<std::mutex> lock(auctionMutex);
        if (!active) return;
        active = false;
        std::ofstream file("results.txt", std::ios::app);
        file << "Auction Closed for Item: " << itemId << "\n";
        if (!bids.empty()) {
            Bid topBid = bids.top();
            file << "Winner: " << topBid.bidderId << " with $" << topBid.amount << "\n";
        } else {
            file << "No bids received.\n";
        }
        file.close();
    }

    void logBid(const Bid& bid) {
        std::ofstream log("bids_log.txt", std::ios::app);
        auto time = std::chrono::system_clock::to_time_t(bid.timestamp);
        log << "Item: " << itemId << ", Bidder: " << bid.bidderId
            << ", Amount: $" << bid.amount << ", Time: " << std::ctime(&time);
        log.close();
    }
};

std::unordered_map<std::string, Auction> auctions;
std::mutex globalMutex;

void auctionScheduler() {
    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(5));
        std::lock_guard<std::mutex> lock(globalMutex);
        for (auto& [itemId, auction] : auctions) {
            if (!auction.isActive()) {
                auction.closeAuction();
            }
        }
    }
}

int main() {
    std::thread scheduler(auctionScheduler);
    scheduler.detach();

    std::cout << "Welcome to OAP_SIM\n";
    std::string id, name, role;
    std::cout << "Enter ID: "; std::cin >> id;
    std::cout << "Enter Name: "; std::cin >> name;
    std::cout << "Are you Buyer or Seller? "; std::cin >> role;

    User* user = nullptr;
    if (role == "Buyer")
        user = new Buyer(id, name);
    else if (role == "Seller")
        user = new Seller(id, name);
    else {
        std::cout << "Invalid role!\n";
        return 1;
    }

    user->menu();

    while (true) {
        int choice;
        std::cout << "\n1. Create Auction\n2. Place Bid\n3. Exit\nChoice: ";
        std::cin >> choice;

        if (choice == 1 && role == "Seller") {
            std::string itemId;
            double price;
            int duration;
            std::cout << "Item ID: "; std::cin >> itemId;
            std::cout << "Min Price: "; std::cin >> price;
            std::cout << "Duration (sec): "; std::cin >> duration;
            std::lock_guard<std::mutex> lock(globalMutex);
            auctions[itemId] = Auction(itemId, id, price, duration);
            std::cout << "Auction created for item: " << itemId << "\n";
        } else if (choice == 2 && role == "Buyer") {
            std::string itemId;
            double amount;
            std::cout << "Item ID: "; std::cin >> itemId;
            std::cout << "Bid Amount: "; std::cin >> amount;
            std::lock_guard<std::mutex> lock(globalMutex);
            if (auctions.find(itemId) != auctions.end()) {
                auctions[itemId].placeBid(Bid(id, amount));
            } else {
                std::cout << "Auction not found.\n";
            }
        } else if (choice == 3) {
            break;
        } else {
            std::cout << "Invalid choice or action for this role.\n";
        }
    }

    delete user;
    return 0;
}

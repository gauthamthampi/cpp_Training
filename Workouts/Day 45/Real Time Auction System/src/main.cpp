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

using namespace std;

class User {
public:
    string userId;
    string name;
    User(string id, string n) : userId(id), name(n) {}
    virtual void menu() = 0;
};

class Buyer : public User {
public:
    Buyer(string id, string name) : User(id, name) {}
    void menu() override {
        cout << "Buyer Menu: You can place bids.\n";
    }
};

class Seller : public User {
public:
    Seller(string id, string name) : User(id, name) {}
    void menu() override {
        cout << "Seller Menu: You can create auctions.\n";
    }
};

class Bid {
public:
    string bidderId;
    double amount;
    chrono::system_clock::time_point timestamp;

    Bid(string id, double amt)
        : bidderId(id), amount(amt), timestamp(chrono::system_clock::now()) {}

    bool operator<(const Bid& other) const {
        return amount < other.amount;
    }
};


class Auction {
public:
    string itemId;
    string sellerId;
    double minPrice;
    bool active;
    priority_queue<Bid> bids;
    set<string> activeBidders;
    mutex auctionMutex;
    chrono::system_clock::time_point endTime;

    Auction(string item, string seller, double price, int durationSeconds)
        : itemId(item), sellerId(seller), minPrice(price), active(true) {
        endTime = chrono::system_clock::now() + chrono::seconds(durationSeconds);
    }

    bool isActive() {
        lock_guard<mutex> lock(auctionMutex);
        return active && chrono::system_clock::now() < endTime;
    }

    void placeBid(const Bid& bid) {
        lock_guard<mutex> lock(auctionMutex);
        if (isActive() && bid.amount >= minPrice) {
            bids.push(bid);
            activeBidders.insert(bid.bidderId);
            cout << "Bid placed: " << bid.bidderId << " -> $" << bid.amount << endl;
            logBid(bid);
        }
        else {
            cout << "Bid rejected for item " << itemId << endl;
        }
    }

    void closeAuction() {
        lock_guard<mutex> lock(auctionMutex);
        if (!active) return;
        active = false;
        ofstream file("results.txt", ios::app);
        file << "Auction Closed for Item: " << itemId << "\n";
        if (!bids.empty()) {
            Bid topBid = bids.top();
            file << "Winner: " << topBid.bidderId << " with $" << topBid.amount << "\n";
        }
        else {
            file << "No bids received.\n";
        }
        file.close();
    }

    void logBid(const Bid& bid) {
        ofstream log("bids_log.txt", ios::app);
        auto time = chrono::system_clock::to_time_t(bid.timestamp);
        log << "Item: " << itemId << ", Bidder: " << bid.bidderId
            << ", Amount: $" << bid.amount << ", Time: " << ctime(&time);
        log.close();
    }
};

unordered_map<string, shared_ptr<Auction>> auctions;
mutex globalMutex;

void auctionScheduler() {
    while (true) {
        this_thread::sleep_for(chrono::seconds(5));
        lock_guard<mutex> lock(globalMutex);
        for (auto& auc : auctions) {
            if (!auc.second->isActive()) {
                auc.second->closeAuction();
            }
        }
    }
}


int main() {
    thread scheduler(auctionScheduler);
    scheduler.detach();

    cout << "Welcome to OAP_SIM\n";
    string id, name, role;
    cout << "Enter ID: "; cin >> id;
    cout << "Enter Name: "; cin >> name;
    cout << "Are you Buyer or Seller? "; cin >> role;

    User* user = nullptr;
    if (role == "Buyer")
        user = new Buyer(id, name);
    else if (role == "Seller")
        user = new Seller(id, name);
    else {
        cout << "Invalid role!\n";
        return 1;
    }

    user->menu();

    while (true) {
        int choice;
        cout << "\n1. Create Auction\n2. Place Bid\n3. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1 && role == "Seller") {
            string itemId;
            double price;
            int duration;
            cout << "Item ID: "; cin >> itemId;
            cout << "Min Price: "; cin >> price;
            cout << "Duration (sec): "; cin >> duration;
            lock_guard<mutex> lock(globalMutex);
            auctions[itemId] = make_shared<Auction>(itemId, id, price, duration);
            cout << "Auction created for item: " << itemId << "\n";
        }
        else if (choice == 2 && role == "Buyer") {
            string itemId;
            double amount;
            cout << "Item ID: "; cin >> itemId;
            cout << "Bid Amount: "; cin >> amount;
            lock_guard<mutex> lock(globalMutex);
            if (auctions.find(itemId) != auctions.end()) {
                auctions[itemId]->placeBid(Bid(id, amount));         
            }
            else {
                cout << "Auction not found.\n";
            }
        }
        else if (choice == 3) {
            break;
        }
        else {
            cout << "Invalid choice or action for this role.\n";
        }
    }

    delete user;
    return 0;
}

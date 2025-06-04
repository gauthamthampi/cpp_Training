#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<std::string> usernames;

    // Insert elements
    usernames.insert("alice");
    usernames.insert("bob");
    usernames.insert("charlie");
    usernames.insert("alice"); // duplicate, will be ignored

    std::cout << "Registered usernames:\n";
    for (const auto& name : usernames) {
        std::cout << name << "\n";
    }

    // Find a username
    std::string search_name = "bob";
    if (usernames.find(search_name) != usernames.end()) {
        std::cout << search_name << " is already registered.\n";
    }

    // Erase a username
    usernames.erase("charlie");

    std::cout << "Usernames after deletion:\n";
    for (const auto& name : usernames) {
        std::cout << name << "\n";
    }

    // Show size
    std::cout << "Total users: " << usernames.size() << "\n";

    return 0;
}
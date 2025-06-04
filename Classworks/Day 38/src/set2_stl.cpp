#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<std::string> users;

    // insert()
    users.insert("alice");
    users.insert("bob");
    users.insert("charlie");
    users.insert("alice"); // ignored, already exists

    std::cout << "\nInitial set:\n";
    for (const auto& u : users)
        std::cout << u << "\n"; // sorted and unique

    // find()
    std::cout << "\nSearching for 'bob': ";
    auto it = users.find("bob");
    if (it != users.end())
        std::cout << "Found\n";
    else
        std::cout << "Not Found\n";

    // count()
    std::cout << "'charlie' exists? " << users.count("charlie") << "\n";
    std::cout << "'david' exists? " << users.count("david") << "\n";

    // erase() by value
    users.erase("charlie");
    std::cout << "\nAfter erasing 'charlie':\n";
    for (const auto& u : users)
        std::cout << u << "\n";

    // size()
    std::cout << "\nCurrent size: " << users.size() << "\n";

    // empty()
    std::cout << "Is set empty? " << (users.empty() ? "Yes" : "No") << "\n";

    // insert more for bounds
    users.insert("david");
    users.insert("eve");

    // lower_bound()
    auto lb = users.lower_bound("bob"); // >= "bob"
    std::cout << "\nLower bound of 'bob': " << (lb != users.end() ? *lb : "None") << "\n";

    // upper_bound()
    auto ub = users.upper_bound("bob"); // > "bob"
    std::cout << "Upper bound of 'bob': " << (ub != users.end() ? *ub : "None") << "\n";

    // erase() by iterator
    if (!users.empty()) {
        users.erase(users.begin()); // Erase first element
        std::cout << "\nAfter erasing first element:\n";
        for (const auto& u : users)
            std::cout << u << "\n";
    }

    // clear()
    users.clear();
    std::cout << "\nAfter clear(), size = " << users.size() << "\n";

    // swap()
    std::set<int> a = { 1, 2, 3 };
    std::set<int> b = { 10, 20 };

    std::cout << "\nBefore swap:\nSet A: ";
    for (int x : a) std::cout << x << " ";
    std::cout << "\nSet B: ";
    for (int x : b) std::cout << x << " ";

    a.swap(b);

    std::cout << "\n\nAfter swap:\nSet A: ";
    for (int x : a) std::cout << x << " ";
    std::cout << "\nSet B: ";
    for (int x : b) std::cout << x << " ";

    return 0;
}
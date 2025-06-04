#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<string> backHistory;
    deque<string> forwardHistory;
    string currentPage = "home";

    string line;
    while (getline(cin, line)) {
        if (line == "exit") break;

        if (line.substr(0, 6) == "visit ") {
            string url = line.substr(6);
            backHistory.push_back(currentPage);
            currentPage = url;
            forwardHistory.clear();
            cout << "Visited: " << currentPage << endl;
        }
        else if (line == "back") {
            if (!backHistory.empty()) {
                forwardHistory.push_back(currentPage);
                currentPage = backHistory.back();
                backHistory.pop_back();
                cout << "Back to: " << currentPage << endl;
            }
            else {
                cout << "No back history!" << endl;
            }
        }
        else if (line == "forward") {
            if (!forwardHistory.empty()) {
                backHistory.push_back(currentPage);
                currentPage = forwardHistory.back();
                forwardHistory.pop_back();
                cout << "Forward to: " << currentPage << endl;
            }
            else {
                cout << "No forward history!" << endl;
            }
        }
        else if (line == "current") {
            cout << "Current page: " << currentPage << endl;
        }
        else if (line == "history") {
            cout << "Browsing History:\n";

            cout << "Back Stack:";
            if (backHistory.empty()) cout << " (empty)";
            else {
                for (const auto& page : backHistory)
                    cout << " " << page;
            }
            cout << endl;

            cout << "Current: " << currentPage << endl;

            cout << "Forward Stack:";
            if (forwardHistory.empty()) cout << " (empty)";
            else {
                for (auto it = forwardHistory.rbegin(); it != forwardHistory.rend(); ++it)
                    cout << " " << *it;
            }
            cout << endl;
        }
        else {
            cout << "Unknown command!" << endl;
        }
    }

    return 0;
}

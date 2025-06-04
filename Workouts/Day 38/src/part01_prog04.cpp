#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    deque<string> history;
    const size_t LIMIT = 4;

    string input;
    while (getline(cin, input)) {
        if (input == "HISTORY") break;

        if (input.find("RUN ") == 0) {
            string command = input.substr(4); 
            history.push_back(command);

            if (history.size() > LIMIT) {
                history.pop_front();
            }
        }
    }

    for (const auto& cmd : history) {
        cout << cmd << endl;
    }

    return 0;
}

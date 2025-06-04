#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> buffer;
    auto cursor = buffer.begin(); 

    string line;
    while (getline(cin, line)) {
        if (line == "PRINT") break;

        if (line.substr(0, 6) == "INSERT") {
            string content = line.substr(7);
            cursor = buffer.insert(cursor, content); 
            ++cursor;
        }
        else if (line == "UP") {
            if (cursor != buffer.begin()) --cursor;
        }
        else if (line == "DOWN") {
            if (cursor != buffer.end()) ++cursor;
        }
    }

    for (const auto& l : buffer) {
        cout << l << endl;
    }

    return 0;
}

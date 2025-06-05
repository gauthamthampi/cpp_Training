#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	set<int>userId;
	string line;
	int count=0;
	while (getline(cin, line)) {
		if (line == "EXIT") break;

		if (line.substr(0, 6) == "VISIT ") {
			int id = stoi(line.substr(6));
			userId.insert(id);
		}
		else if (line == "UNIQUE") {
			for (const auto& id : userId) {
				count++;
			}
			cout << count;
		}
		else if (line == "TOP") {
			for (const auto& id : userId) {
				cout << id << " ";
			}
		}
	}
	return 0;
}
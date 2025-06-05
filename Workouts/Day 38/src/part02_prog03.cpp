#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	set<int>stocks;
	string line;
	int count = 0;
	while (getline(cin, line)) {
		if (line == "EXIT") break;

		if (line.substr(0, 4) == "ADD ") {
			int id = stoi(line.substr(4));
			stocks.insert(id);
		}
		else if (line.substr(0, 7) == "REMOVE ") {
			int id = stoi(line.substr(7));
			stocks.erase(id);
			cout << "Removed " << id;
		}
		else if (line == "MINMAX") {
			if (stocks.empty()) {
				cout << "Stocks are empty";
			}
			else {
				cout << *stocks.begin() << " " << *prev(stocks.end());
			}
		}
	}
	return 0;
}
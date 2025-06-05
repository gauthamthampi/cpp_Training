#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	set<int>bookings;
	string line;
	bool check;
	while (getline(cin, line)) {
		check = false;
		if (line.substr(0, 5) == "BOOK ") {
			int id = stoi(line.substr(5));
			for (const auto& i : bookings) {
				if (i == id) {
					check = true;
				}
			}
			if (!check) {
				bookings.insert(id);
				cout << "Booked : " << id;
			}
			else {
				cout << "Already Booked" << endl;
			}
		}
		else if (line.substr(0, 6) == "CHECK ") {
			check = false;
			int id = stoi(line.substr(6));
			for (const auto& i : bookings) {
				if (i == id) {
					check = true;
				}
			}
			if (!check) {
				cout << "Free" << endl;
			}
			else {
				cout << "Occupied" << endl;
			}
		}
	}
	return 0; 
} 
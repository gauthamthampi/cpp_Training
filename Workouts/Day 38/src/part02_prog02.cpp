#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	set<string>banned_words = { "bad", "evil", "vulgar" };
	string line;

	while (getline(cin, line)) {
		if (line == "exit") break;
		for (const auto& ban : banned_words) {
			size_t pos;
			while ((pos = line.find(ban)) != string::npos) {
				line.erase(pos, ban.length());
			}
		}

		cout << line;
	}
}
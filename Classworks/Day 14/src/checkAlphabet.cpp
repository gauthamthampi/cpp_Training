#include <iostream>
using namespace std;

int main() {
	char ch;
	cout << "Enter the character: ";
	cin >> ch;
	int ascVal = ch;

	if (ascVal >= 97 && ascVal <= 122 || ascVal >= 65 && ascVal <= 90) {
		cout << "It is an alphabet";
		return 0;
	}

	cout << "Not an alphabet";
	return 0;
}
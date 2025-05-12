// 6) Write a Program to Print Check Whether a Character is an Alphabet or Not

#include <iostream>
using namespace std;
bool isAlphabet(char);

int main() {
	char ch;
	cin >> ch;
	if (isAlphabet(ch))
		cout << "Alphabet";
	else
		cout << "Not an alphabet";
	return EXIT_SUCCESS;
}

bool isAlphabet(char ch) {
	bool flag = false;
	int asci = ch;
	if (asci >= 65 && asci <= 90 || asci >= 97 && asci <= 122) {
		flag = true;
	}
	return flag;
}


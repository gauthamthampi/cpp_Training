// 4) Write a Program to Find the ASCII Value of a Character

#include <iostream>
using namespace std;
int findAscii(char);

int main() {
	char ch;
	cin >> ch;
	cout << "ASCII value is: " << findAscii(ch);
	return EXIT_SUCCESS;
}

int findAscii(char ch) {
	int value = ch;
	return value;
}
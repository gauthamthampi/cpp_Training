// 1) Write a C++ Program to Check Whether a Number is a Positive or Negative Number

#include <iostream>
using namespace std;
bool checkNumber(int);

int main() {
	int num;
	cin >> num;
	if (checkNumber(num))
		cout << "Positive";
	else
		cout << "Negative";
	return EXIT_SUCCESS;
}

bool checkNumber(int num) {
	return num >= 0 ? true : false;
}
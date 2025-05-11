//15) Write a Program to Find a Leap Year or Not

#include <iostream>
using namespace std;
bool isLeap(int);

int main() {
	int year;
	cin >> year;
	if (isLeap(year))
		cout << "Leap year";
	else
		cout << "Not a leap year";
	return EXIT_SUCCESS;
}

bool isLeap(int year) {
	bool flag = false;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		flag = true;
	}
	return flag;
}


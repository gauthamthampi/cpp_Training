// 3) C++ Program To Check Whether Number is Even Or Odd

#include <iostream>
using namespace std;
bool checkNumber(int);

int main() {
	int num;
	cin >> num;
	if (checkNumber(num))
		cout << "Even";
	else
		cout << "Odd";
	return EXIT_SUCCESS;
}

bool checkNumber(int num) {
	return num % 2 == 0 ? true : false;
}
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Enter three numbers:" << endl;
	cout << "Enter number 1: ";
	cin >> a;
	cout << "Enter number 2: ";
	cin >> b;
	cout << "Enter number 3: ";
	cin >> c;

	if (a > b) {
		if (a > c) {
			cout << a << " is the largest.";
		}
		else {
			cout << c << " is the largest.";
		}
	}
	else {
		if (b > c) {
			cout << b << " is the largest.";
		}
		else {
			cout << c << " is the largest.";
		}
	}
	return 0;
}
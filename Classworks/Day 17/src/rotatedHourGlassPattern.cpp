#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 0;i < num;i++) {
		for (int j = 0;j <= i;j++) {
			cout << "* ";
		}
		for (int k = 0;k < 2*(num-i)-2;k++) {
			cout << "  ";
		}
		for (int l = 0;l <= i;l++) {
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = num-2;i >=0 ;i--) {
		for (int j = 0;j <= i;j++) {
			cout << "* ";
		}
		for (int k = 0;k < 2 * (num - i) - 2;k++) {
			cout << "  ";
		}
		for (int l = 0;l <= i;l++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
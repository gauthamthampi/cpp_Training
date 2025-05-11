#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int count = num;
	while (count > 0) {
		for (int i = 1;i <= num / 2;i++) {
			cout << "A";
		}
		for (int j = num / 2;j <= num;j++) {
			cout << "B";
		}
		cout << endl;
		for (int k = 1;k <= num / 2;k++) {
			cout << "C";
		}
		for (int l = num / 2;l <= num;l++) {
			cout << "D";
		}
		count--;
	}
}
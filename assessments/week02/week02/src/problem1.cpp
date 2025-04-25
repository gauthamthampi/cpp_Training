#include <iostream>
using namespace std;

/*
Constraints:
4<=N<=10

Sample Input1:
5
Sample Output1:

*
*1*
*121*
*12321*
*1234321*
*123454321*
*1234321*
*12321*
*121*
*1*
*

*/
int main() {
	int num;
	cout << "Enter the number: ";
	cin >> num;
	cout << "*" << endl;
	for (int i = 1;i <= num;i++) {
		if (i == 0) {
			continue;
		}
		else {
			cout << "*";
		}
		for (int j = 1;j <= i;j++) {
			cout << j;
			
		}
		if (i > 1) {
			for (int k = i - 1;k >= 1;k--) {
				cout << k;
			}
		}
		cout << "*" << endl;
		
	}

	for (int i = num;i >=0;i--) {
		if (i == 0) {
			continue;
		}
		else {
			cout << "*";
		}
		for (int j = 1;j <= i;j++) {
			cout << j;

		}
		if (i > 1) {
			for (int k = i - 1;k >= 1;k--) {
				cout << k;
			}
		}
		cout << "*" << endl;

	}
	cout << "*";
}
//49) Write a Program for Decimal to Binary Conversion
#include <iostream>
using namespace std;
int decimaltoBinary(int);
int main() {
	int num;
	cin >> num;
	decimaltoBinary(num);
	return EXIT_SUCCESS;
}

int decimaltoBinary(int num) {
	int i = 0, bin[10];
	for (i = 0;num > 0;i++) {
		bin[i] = num % 2;
		num = num / 2;
	}
	cout << "Binary is: " << endl;
	for (i = i - 1;i >= 0;i--) {
		cout << bin[i];
	}
	return 0;
}
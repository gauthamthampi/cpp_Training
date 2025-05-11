#include <iostream>
using namespace std;

int octalToDecimal(int);
void decimalToOctal(int);
int main() {
	int num;
	cin >> num;
	//cout << "Decimal value is: " << octalToDecimal(num);
    decimalToOctal(num);
	return 0;
}

int octalToDecimal(int num) {
	int decimal=0,i=0;
	while (num > 0) {
		int digit = num % 10;
		decimal += digit * pow(8, i);
		num /= 10;
		i++;
	}
	return decimal;
}


void decimalToOctal(int num) {
	int rem = 0,oct[10],i=0;
	while (num > 8) {
		oct[i] = num % 8;
		num = num / 8;
	}
	cout << "Octal is: ";
	for (i = i - 1;i >= 0;i--) {
		cout << oct[i];
	}
}
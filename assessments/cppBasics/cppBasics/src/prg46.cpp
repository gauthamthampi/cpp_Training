//46)Write a Program for Octal to Decimal Conversion
#include <iostream>
#include <cmath>
using namespace std;

int octalToDecimal(int);
int main() {
	int num;
	cin >> num;
	cout << octalToDecimal(num);
	return 0;
}

int octalToDecimal(int num) {
	int decimal = 0, i = 0;
	while (num > 0) {
		int digit = num % 10;
		decimal += digit * pow(8, i);
		num /= 10;
		i++;
	}
	return decimal;
}



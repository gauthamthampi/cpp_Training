//18) Write a Program to Check Whether a Number is an Armstrong Number or Not

#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int);
int countDigits(int);

int main() {
	int num;
	cin >> num;
	if (isArmstrong(num))
		cout << "Armstrong number";
	else
		cout << "Not an armstrong number";
	return EXIT_SUCCESS;
}

int countDigits(int num) {
	int count = 0;
	while (num > 0) {
		count++;
		num /= 10;
	}
	return count;
}

bool isArmstrong(int num) {
	bool flag = false;
	int digits = countDigits(num),sum=0,n=num;
	while (num > 0) {
		int digit = num % 10;
		sum += pow(digit, digits);
		num /= 10;
	}
	if (sum == n) flag = true;
	return flag;
}




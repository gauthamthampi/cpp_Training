//21)Write a Program to Calculate the Lowest Common Multiple(LCM) of Two Numbers

#include <iostream>
using namespace std;
int findGCD(int, int);
int findLCM(int, int);

int main() {
	int num1, num2;
	cin >> num1;
	cin >> num2;
	cout << "Least Common Divisor is : " << findLCM(num1, num2);
	return EXIT_SUCCESS;
}

int findGCD(int num1, int num2) {
	while (num2 != 0) {
		int temp = num2;
		num2 = num1 % num2;
		num1 = temp;
	}
	return num1;
}

int findLCM(int num1, int num2) {
	return (num1 * num2) / findGCD(num1, num2);
}
//20) Write a Program to Calculate the Greatest Common Divisor of Two Numbers

#include <iostream>
using namespace std;
int findGreatestCommonDivisor(int,int);

int main() {
	int num1,num2;
	cin >> num1;
	cin >> num2;
	cout << "Greatest Common Divisor is : " << findGreatestCommonDivisor(num1,num2);
	return EXIT_SUCCESS;
}

int findGreatestCommonDivisor(int num1,int num2) {
	while (num2 != 0) {
		int temp = num2;
		num2 = num1 % num2;
		num1 = temp;
	}
	return num1;
}




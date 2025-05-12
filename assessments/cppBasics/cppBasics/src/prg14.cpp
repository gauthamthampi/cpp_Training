// 14) Write a Program to Find the Factorial of a Number Using Loops

#include <iostream>
using namespace std;
int factorial(int);

int main() {
	int num;
	cin >> num;
	cout << "Factorial is: " << factorial(num);
	return EXIT_SUCCESS;
}

int factorial(int num) {
	int fact=1;
	while (num > 0) {
		fact *= num;
		num--;
	}
	return fact;
}
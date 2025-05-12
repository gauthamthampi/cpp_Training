//39)Write a Program to Calculate the Factorial of a Number Using Recursion

#include <iostream>
using namespace std;
int factorial(int);

int main() {
    int num;
	cin >> num;
	cout << factorial(num);
	return EXIT_SUCCESS;
}

int factorial(int num) {
	if (num <= 1) {
		return 1;
	}
	return num * factorial(num - 1);
}
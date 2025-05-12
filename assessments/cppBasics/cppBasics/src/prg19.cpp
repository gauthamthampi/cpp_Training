// 19) Write a Program to Find the Nth Term of the Fibonacci Series

#include <iostream>
using namespace std;
int findFibonacci(int);

int main() {
	int num;
	cin >> num;
	cout << "Number is : " << findFibonacci(num);
	return EXIT_SUCCESS;
}

int findFibonacci(int num) {
	if (num == 0) {
		return 0;
	}
	else if (num == 1) {
		return 1;
	}
	else {
		return findFibonacci(num - 1) + findFibonacci(num - 2);
	}
}


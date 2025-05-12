//16) Write a Program to Check the Prime Number

#include <iostream>
using namespace std;
bool isPrime(int);

int main() {
	int num;
	cin >> num;
	if (isPrime(num))
		cout << "Prime number";
	else
		cout << "Not a prime number";
	return EXIT_SUCCESS;
}

bool isPrime(int num) {
	bool flag = true;
	for (int i = 2;i < num / 2;i++) {
		if (num % i == 0)
			flag = false;
	}
	return flag;
}


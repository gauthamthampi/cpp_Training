#include <iostream>
using namespace std;

int factorial(int);
int main() {
	int num;
	cin >> num;

	cout << "The factorial is: " << factorial(num);
	return 0;
}

int factorial(int i) {
	int out = 1;
	while (i > 0) {
		out *= i;
		i--;
	}
	return out;
}
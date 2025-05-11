//42) Write a Program to Swap the Values of Two Variables Without Using any Extra Variable
#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << a << endl << b;

	return 0;
}
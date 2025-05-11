#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a;
	cin >> b;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "The value of a: " << a << " and b is: " << b;
	return 0;
}
//binary to decimal
//decimal to binary
//octal to decimal & decimal to octal
#include <iostream>
using namespace std;

int main() {
	int a = 5, b = 10;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout << "A is " << a << " and B is " << b;
	return EXIT_SUCCESS;
}
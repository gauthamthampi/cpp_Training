#include <iostream>
using namespace std;

int recFunc(int);
int factorial(int);

int main() {
	int num;
	cout << "Enter the number: ";
	cin >> num;
	cout << factorial(num);
	return 0;
}
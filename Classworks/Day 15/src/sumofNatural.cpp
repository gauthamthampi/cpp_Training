#include <iostream>
using namespace std;
int sumofNatural(int);
int main() {
	int num;
	cout << "Enter the number: ";
	cin >> num;

	int sum = sumofNatural(num);
	cout << "The sum is: " << sum;
	return 0;
}

int sumofNatural(int i) {
	int sum = 0;
	while (i >= 0) {
		sum += i;
		i--;
	}
	return sum;
}
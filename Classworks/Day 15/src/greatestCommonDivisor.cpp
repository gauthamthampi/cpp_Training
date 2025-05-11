#include <iostream>
using namespace std;
int findGreatestDivisor(int, int);
int findGreatestDivisorEuclid(int, int);
int main() {
	int num1, num2;
	cin >> num1;
	cin >> num2;

	cout << "The greatest common divisor is: " << findGreatestDivisorEuclid(num1, num2);
	return 0;
}

int findGreatestDivisor(int n1, int n2) {
	int larger = n1 > n2 ? n1 : n2;
	int gcd;
	for (int i = larger;i >= 2;i--) {
		if ((n1 % i == 0) && (n2 % i == 0)) {
			gcd = i;
			break;
		}
	}
	return gcd;
}

//euclid's algo
int findGreatestDivisorEuclid(int n1, int n2) {
	while (n2 != 0) {
		int temp = n2;
		n2 = n1 % n2;
		n1 = temp;
	}
	return n1;
}
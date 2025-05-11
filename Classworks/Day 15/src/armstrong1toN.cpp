#include <iostream>
#include <math.h>
using namespace std;

int printArmstrong(int);

int main() {
	int num;
	cin >> num;
	//printArmstrong(num);
	int digits = findDigits(num);

	return 0;
}

int printArmstrong(int n) {
	int count = 1;
	while (count <= n) {
		int num = count,digitCount=0;
		int sum = 0;
		while (num > 0) {
			digitCount++;
			num /= 10;
		}
		num = count;
		while (num > 0) {
			int digit = num % 10;
			sum += pow(digit, digitCount);
			num /= 10;
		}
		if (sum == count) {
			cout << count << " ";
		}
		count++;
	}
	return 0;
}

int printArmstrong() {

}

int findDigits() {

}

//split printArmstrong into 2 functions(1 for finding 
// digits and for checking armstrong or not)
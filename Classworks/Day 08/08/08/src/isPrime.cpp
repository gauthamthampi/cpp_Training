#include <iostream>
using namespace std;

bool isPrime(int num) {
	bool flag = false;
	for (int i = 2;i <= num / 2;i++) {
		if (num % i == 0) {
			flag = true;
			break;
		}
	}
	if (flag == false) {
		return true;
	}
	else {
		return false;
	}
}
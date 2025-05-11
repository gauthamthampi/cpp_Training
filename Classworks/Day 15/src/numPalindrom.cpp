#include <iostream>
using namespace std;

int reverseNum(int);
int main() {
	int num;
	cin >> num;

	int rev = reverseNum(num);
	if (num == rev)
		cout << "Palindrome";
	else
		cout << "Not palindrome";
	return 0;
	
}

int reverseNum(int i) {
	int rev_num = 0;
	while (i > 0) {
		rev_num = rev_num * 10 + i % 10;
		i /= 10;
	}
	return rev_num;
}
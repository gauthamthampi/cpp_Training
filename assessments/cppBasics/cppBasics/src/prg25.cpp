//25) Write a Program to Check if the Given String is Palindrome or Not

#include <iostream>
using namespace std;
#define MAX 100
bool isPalindrome(char[]);
int main() {
	char str[MAX];
	cin >> str;
	if (isPalindrome(str))
		cout << "Palindrome";
	else
		cout << "Not palindrome";
	return EXIT_SUCCESS;
}

bool isPalindrome(char str[]) {
	bool flag = true;
	for (int i = 0;i < strlen(str);i++) {
		if (str[i] != str[strlen(str) - 1 - i]) {
			flag = false;
			break;
		}
	}
	return flag;
}




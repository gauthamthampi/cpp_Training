//17) Write a Program to Check Palindrome

#include <iostream>
using namespace std;
bool isPalindrome(char[]);
#define MAX 100

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
	int length = strlen(str);
	for (int i = 2;i < length;i++) {
		if(str[i]!=str[length-1-i])
			flag = false;
	}
	return flag;
}


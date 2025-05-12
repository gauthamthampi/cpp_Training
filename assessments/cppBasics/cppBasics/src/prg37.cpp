//37) Write a Program to Check if the Given String is Palindrome or not Using Recursion
#include <iostream>
using namespace std;
bool isPalindrome(char[], int, int);
#define MAX 100

int main() {
	char str[MAX];
	cin.getline(str, MAX);

	if (isPalindrome(str, 0, strlen(str) - 1)) {
		cout << "Palindrome";
	}
	else {
		cout << "Not palindrome";
	}
	return EXIT_SUCCESS;
}

bool isPalindrome(char str[], int start, int end) {
	if (start >= end) {
		return true;
	}
     
	if (str[start] != str[end]) {
		return false;
	}

	return isPalindrome(str, start + 1, end - 1);
}
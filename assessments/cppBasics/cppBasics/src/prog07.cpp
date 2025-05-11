// 7) Write a Program to Find the Length of the String Without using strlen() Function

#include <iostream>
using namespace std;
int findLength(char[]);
#define MAX 100

int main() {
	char str[MAX];
	cin >> str;
	cout << "String length is: " << findLength(str);
	return EXIT_SUCCESS;
}

int findLength(char str[]) {
	int length = 0,i=0;
	while (str[i] != '\0') {
		length++;
		i++;
	}
	return length;
}
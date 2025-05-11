//38) Write a Program to Calculate the Length of the String Using Recursion

#include <iostream>
using namespace std;
int findLength(char[]);
#define MAX 100

int main() {
	char str[MAX];
	cin.getline(str, MAX);
	cout << findLength(str);
	return EXIT_SUCCESS;
}

int findLength(char str[]) {
	if (str[0]=='\0')  {
		return 0;
	}
	return 1 + findLength(str + 1);
	}
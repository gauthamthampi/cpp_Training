//36) Write a C++ Program to Print the Given String in Reverse Order Using Recursion

#include <iostream>
using namespace std;
void reverseStr(char[],int,int);
#define MAX 100

int main() {
	char str[MAX];
	cin.getline(str, MAX);
	reverseStr(str,0,strlen(str)-1);
	printf("%s", str);
	return EXIT_SUCCESS;
}

void reverseStr(char str[], int start, int end) {
	if (start >= end) {
		return;
	}

	char temp = str[start];
	str[start] = str[end];
	str[end] = temp;
	
	reverseStr(str, start + 1, end - 1);
}
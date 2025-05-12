//35) Write a Program to Print the Given String in Reverse Order

#include <iostream>
using namespace std;
void reverseStr(char[]);
#define MAX 100

int main() {
	char str[MAX];
	cin.getline(str,MAX);
	reverseStr(str);
	return EXIT_SUCCESS;
}

void reverseStr(char str[]) {
	int i = strlen(str)-1;
	while (i>=0) {
		cout << str[i];
		i--;
	}	
}
//8) Write a Program to Toggle Each Character in a String

#include <iostream>
using namespace std;
#include <cctype>
#define MAX 100
void stringToggle(char[]);

int main() {
	char str[MAX];
	cin >> str;
	stringToggle(str);
	return EXIT_SUCCESS;
}

void stringToggle(char str[]) {
	for (int i = 0; str[i] != '\0';i++) {
		if (islower(str[i]))
			str[i] = toupper(str[i]);
		else
			str[i] = tolower(str[i]);

	}
	cout << str;
}


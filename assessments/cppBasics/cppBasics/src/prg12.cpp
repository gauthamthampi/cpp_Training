//12) Write a Program to Remove Spaces From a String

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
#define MAX 100
void removeSpaces(char[]);

int main() {
	char str[MAX];
	cin.getline(str,MAX);
	removeSpaces(str);
	return EXIT_SUCCESS;
}

void removeSpaces(char str[]) {
	char output[MAX];
	int j = 0;
	for (int i = 0;i < strlen(str); i++) {
		if (str[i] != ' ') {
			output[j++] = str[i];
		}
	}
	output[j] = '\0';
	cout << "Output: " << output;
}


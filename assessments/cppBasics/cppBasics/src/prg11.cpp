// 11)Write a Program to Remove All Characters From a String Except Alphabets

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
#define MAX 100
void removeCharacters(char[]);

int main() {
	char str[MAX];
	cin >> str;
	removeCharacters(str);
	return EXIT_SUCCESS;
}

void removeCharacters(char str[]) {
	char output[MAX];
	int j = 0;
	for (int i = 0;i < strlen(str); i++) {
		if (isalpha(str[i])) {
			output[j++] = str[i];
		}
	}
	output[j] = '\0';
	cout << "Output: " << output;
}


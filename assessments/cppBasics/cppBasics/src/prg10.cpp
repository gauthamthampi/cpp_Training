//10) Write a Program to Remove the Vowels from a String

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

#define MAX 100
bool isVowel(char);
void removeVowels(char[]);

int main() {
	char str[MAX];
	cin >> str;
	removeVowels(str);
	return EXIT_SUCCESS;
}

bool isVowel(char ch) {
	ch = tolower(ch);
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void removeVowels(char str[]) {
	char output[MAX];
	int j = 0;
	for (int i = 0;i < strlen(str); i++) {
		if (!isVowel(str[i])) {
			output[j++] = str[i];
		}
	}
	output[j] = '\0';
	cout << "Output: " << output;
}


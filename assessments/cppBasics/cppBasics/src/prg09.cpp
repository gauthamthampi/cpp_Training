//9) Write a Program to Count the Number of Vowels

#include <iostream>
using namespace std;
#include <cstring>
int countVowels(char[]);
#define MAX 100

int main() {
	char str[MAX];
	cin >> str;
	cout << "Count is: " << countVowels(str);
	return EXIT_SUCCESS;
}

int countVowels(char str[]) {
	int count = 0;
	char vowel[] = { "aeiouAEIOU" };
	for (int j = 0;j < strlen(str);j++) {
		for(int i=0;i<strlen(vowel);i++){
			if (str[j] == vowel[i]) {
				count++;
			}
		}
	}
	return count;
}
//count the vowels 
#include <iostream>
using namespace std;
#define MAX 100
int countVowels(char *ptr);

int countVowels(char* str) {
	int count = 0;
	char vowel[] = "aeiouAEIOU";
	while (*str != '\0') {
		int i = 0;
		while(vowel[i]!='\0'){
			if (*str == vowel[i]) {
				count++;
			}
				i++;
		}
		str++;
	}
	return count;
}

int main() {
	char str[MAX];
	cin.getline(str, MAX);
	cout << countVowels(str);
	return 0;
}

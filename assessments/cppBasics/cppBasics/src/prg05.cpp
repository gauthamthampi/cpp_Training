//5) Write a Program to Check Whether a Character is a Vowel or Consonant

#include <iostream>
using namespace std;
bool checkVowelConsonant(char);

int main() {
	char ch;
	cin >> ch;
	if (checkVowelConsonant(ch))
		cout << "Vowel";
	else
		cout << "Consonant";
	return EXIT_SUCCESS;
}

bool checkVowelConsonant(char ch) {
	char vowels[] = {"aeiouAEIOU"};
	bool flag = false;

	for (int i = 0;i < vowels[i] != '\0';i++) {
		if (ch == vowels[i]) {
			flag = true;
			break;
		}
	}

	return flag;
}
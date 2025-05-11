//26) Write a Program to Check if Two Strings are Anagram or Not

#include <iostream>
using namespace std;
#define MAX 100
bool isAnagram(char[],char[]);
int main() {
	char str1[MAX],str2[MAX];
	cin >> str1;
	cin >> str2;
	if (isAnagram(str1,str2))
		cout << "Anagram";
	else
		cout << "Not anagram";
	return EXIT_SUCCESS;
}

bool isAnagram(char str1[],char str2[]) {
	bool flag = false;
	int length = strlen(str1);
	if (length != strlen(str2)) return false;
	for (int i = 0;i < length-1;i++) {
		for (int j = 0;j < length-1-i;j++) {
			if (str1[j] > str1[j + 1]) {
				int temp = str1[j];
				str1[j] = str1[j + 1];
				str1[j + 1] = temp;
			}
			if (str2[j] > str2[j + 1]) {
				int temp = str2[j];
				str2[j] = str2[j + 1];
				str2[j + 1] = temp;
			}
		}
	}

	if (strcmp(str1, str2) == 0) {
		flag = true;
	}
	cout << str1;
	return flag;
}
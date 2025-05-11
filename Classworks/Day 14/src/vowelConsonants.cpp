#include <iostream>
using namespace std;

int main() {
	char ch;
	bool flag = true;
	cout << "Enter the character";
	cin >> ch;
	char arr[100] = { "aeiouAEIOU" };
	for (int i = 0;i < strlen(arr);i++) {
		if (ch == arr[i]) {
			flag = false;a
		}
	}
	if (flag) {
		cout << "It is Consonant.";
	}
	else {
		cout << "It is Vowel";
	}
	return 0;
}

//cpp
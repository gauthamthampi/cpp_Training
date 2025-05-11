#include <iostream>
using namespace std;

int main() {
	char ch[100];
	int count = 0;
	cout << "Enter the character: ";
	cin.getline(ch, 100);
	char arr[100] = { "aeiouAEIOU" };

	for (int i = 0;i < strlen(ch);i++) {
		for (int j = 0;j < strlen(arr);j++)
		if (ch[i] == arr[j]) {
			count++;
		}
	}

	cout << "There are " << count << " vowel characters.";
	return 0;
}


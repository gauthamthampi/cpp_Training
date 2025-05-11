#include <iostream>
using namespace std;
#define MAX 100

void removeSpaceStr(char[]);
int main() {
	char arr[MAX];
	cout << "Enter the string: ";
	cin.getline(arr, MAX);
	removeSpaceStr(arr);
	return 0;
}

void removeSpaceStr(char str[]) {
	int i = 0, j = 0;
	while (str[i]) {
		if (str[i] != ' ') {
			str[j++] = str[i];
		}
		i++;
	}
	str[j] = '\0';
	cout << "String after removing space: ";
	for (int i = 0;i < strlen(str);i++) {
		cout << str[i];
	}
}
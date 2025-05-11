#include <iostream>
using namespace std;
#define MAX 100

void reverseString(char[]);
int main() {
	char arr[MAX];
	cout << "Enter the string:";
	cin.getline(arr, MAX);
	reverseString(arr);
	return 0;
}

void reverseString(char str[]) {
    char revStr[MAX];
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    int count = 0;
    for (int i = length - 1; i >= 0; i--) {
        revStr[count++] = str[i];
    }
    revStr[count] = '\0';

    cout << "Reversed string: " << revStr << endl;
}
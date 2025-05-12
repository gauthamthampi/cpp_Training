//66) Ltrim
#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100

void ltrim(char str[]) {
	int start = 0;
	while (str[start] == ' ' && str[start] != '\0') {
		start++;
	}
	
	for (int i = 0;i < strlen(str) - start;i++) {
		str[i] = str[start+i];
	}

	str[strlen(str) - start] = '\0';

	cout << str;
}

int main() {
	char str[MAX];
	cin.getline(str, MAX);
	ltrim(str);
	return EXIT_SUCCESS;
}
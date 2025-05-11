#include <iostream>
using namespace std;

int main() {
	char str[100];
	int sum = 0;
	cin >> str;

	for (int i = 0;i < strlen(str);i++) {
		if (isdigit(str[i])) {  
			int digit = str[i] - '0';  
			sum += digit;  
		}
	}

	cout << "Sum is: " << sum;
	return 0;
}
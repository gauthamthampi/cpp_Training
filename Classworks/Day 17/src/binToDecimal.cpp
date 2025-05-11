#include <iostream>
using namespace std;
int binarytoDecimal(char[]);
int decimaltoBinary(int);
int main() {
	//char binary[10];
	int num;
	cin >> num;

	//cout << binarytoDecimal(binary);
	decimaltoBinary(num);
	return EXIT_SUCCESS;
}

int binarytoDecimal(char bin[]) {
	int decimal = 0;
	int length = strlen(bin);

	for (int i = 0;i < length;i++) {
		if (bin[i] == '1') {
			decimal += pow(2, length - i - 1);
		}
	}
	return decimal;
}


int decimaltoBinary(int num) {
	int i = 0, bin[10];
	for (i = 0;num > 0;i++) {
		bin[i] = num % 2;
		num = num / 2;
	}
	cout << "Binary is: " <<  endl;
	for (i = i - 1;i >= 0;i--) {
		cout << bin[i];
	}
	return 0;
}

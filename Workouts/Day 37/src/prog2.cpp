#include <iostream>
#include <array>
#include <string>
using namespace std;
#define MAX 50

int main() {
	array<int, MAX>num;
	num.fill(0);
	string input = "1234567897653322";
	int larger = INT_MIN, smaller = INT_MAX, output;
	//cout << input.length();
	for (int i = 0;i < input.length();i++) {
		int digit = input[i]-'0';
		num[digit]++;
	}

	/*for (int i = 0;i <= 9;i++) {
		cout << i << "=" << num[i] << endl;
	}*/

	for (int i = 0;i < input.length();i++) {
		if (i > larger && num[i]>1) {
			larger = i;
		}
		if (i < smaller && num[i]>0) {
			smaller = i;
		}
	}
	output = larger * num[larger] - smaller;
	cout << output;

	return 0;
}
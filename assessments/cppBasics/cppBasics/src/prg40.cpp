//40) Write a Program to Count the Sum of Numbers in a String

#include <iostream>
using namespace std;
#define MAX 100
int findSum(char[]);

int main() {
	char arr[MAX];
	cin >> arr;
	cout << findSum(arr);
	return EXIT_SUCCESS;
}

int findSum(char arr[]) {
	int sum = 0, i = 0;
	while (arr[i] != '\0') {
		int asci = arr[i];
		if (asci >= 48 && asci <= 57) {
			sum += asci - 48;
		}
		i++;
	}
	return sum;
}




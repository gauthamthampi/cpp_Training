#include <iostream>
using namespace std;
#define MAX 100

int numberToArray(int[], int);
int main() {
	int split[MAX], num;
	cout << "Enter number: ";
	cin >> num;
	int count = numberToArray(split, num);

	cout << "Array is:";
	for (int i = 0;i < count;i++)
		cout << split[i];
	return 0;
}

int numberToArray(int split[],int num) {
	int i = 0;
	while (num > 0) {
		split[i] = num % 10;
		cout << split[i];
		i++;
		num /= 10;
	}
	return i;
}
#include <iostream>
using namespace std;
#define MAX 100

bool palindrome(int[], int);

int main() {
	int arr[MAX],size;
	cout << "Enter size of array";
	cin >> size;
	cout << "Enter array elements";
	for (int i = 0;i < size;i++) {
		cin >> arr[i];
	}
	if (palindrome(arr, size)) {
		cout << "Palindrome";
	}
	else {
		cout << "Not palindrom";
	}
	return 0;

	
}

bool palindrome(int arr[],int size) {
	for (int i = 0;i < size;i++) {
		if (arr[i] != arr[size - 1 - i]) {
			return false;
		}
	}
	return true;
}
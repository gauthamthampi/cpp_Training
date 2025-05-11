//24) Write a Program to Calculate the Sum of Elements in an Array

#include <iostream>
using namespace std;
#define MAX 100
int findSum(int[], int);

int main() {
	int arr[MAX], length;
	cin >> length;
	cout << "Enter elements of array";
	for (int i = 0;i < length;i++) {
		cin >> arr[i];
	}
	cout << "Sum of array: " << findSum(arr, length) << endl;
	return EXIT_SUCCESS;
}

int findSum(int arr[], int size) {
	int sum = 0, i = 0;
	while (i < size) {
		sum += arr[i];
		i++;
	}
	return sum;
}




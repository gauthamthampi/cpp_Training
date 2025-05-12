//23) Write a Program to Find the Second Smallest Element in an Array

#include <iostream>
#include <climits>
using namespace std;
#define MAX 100
int findSecondSmallest(int[], int);

int main() {
	int arr[MAX], length;
	cin >> length;
	cout << "Enter elements of array";
	for (int i = 0;i < length;i++) {
		cin >> arr[i];
	}
	cout << "Second Smallest number: " << findSecondSmallest(arr, length) << endl;
	return EXIT_SUCCESS;
}

int findSecondSmallest(int arr[], int size) {
	int s1 = INT_MAX, s2 = INT_MAX;
	for (int i = 0;i < size;i++) {
		if (arr[i] < s1) {
			s2 = s1;
			s1 = arr[i];
		}
		else if (arr[i] < s2 && arr[i] != s1) {
			s2 = arr[i];
		}
	}
	return s2;
}



//22) Write a Program to Find the Smallest and Largest Element in an Array

#include <iostream>
using namespace std;
#define MAX 100
int findSmallest(int[],int);
int findLargest(int[],int);

int main() {
	int arr[MAX],length;
	cin >> length;
	cout << "Enter elements of array";
	for (int i = 0;i < length;i++) {
		cin >> arr[i];
	}
	cout << "Greatest number: " << findLargest(arr, length) << endl;
	cout << "Smallest number: " << findSmallest(arr,length) << endl;
	return EXIT_SUCCESS;
}

int findSmallest(int arr[], int size) {
	int smallest = arr[0];
	for (int i = 1;i < size;i++) {
		if (arr[i] < smallest) {
			smallest = arr[i];
		}
	}
	return smallest;
}

int findLargest(int arr[], int size) {
	int largest=0;
	for (int i = 1;i < size;i++) {
		if (arr[i] > largest) {
			largest = arr[i];
		}
	}
	return largest;
}


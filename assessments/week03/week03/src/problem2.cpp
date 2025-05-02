#include <iostream>
using namespace std;
#define MAX 1000

/*
2)Problem Statement 2
You are given a sorted array A of size N containing integers. 
Every element in the array appears exactly twice, except for one element that 
appears only once. Your task is to find and print that unique element.
*/
int findUnique(int[], int);
int main() {
	int arr[MAX], n;
	cout << "Enter the number of elements in array: ";
	cin >> n;

	for (int i = 0;i < n;i++) {
		cout << "Enter element " << i + 1 << ":";
		cin >> arr[i];
	}

	cout << findUnique(arr, n);
	return 0;
}

int findUnique(int arr[],int size) {
	for (int i = 0;i < size;i++) {
		if (arr[i] != arr[i + 1] && arr[i] != arr[i-1]) {
			return arr[i];
		}
	}
	return 0;
}

//ALL TEST CASE VERIFIED
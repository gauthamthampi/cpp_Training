#include <iostream>
using namespace std;
#define MAX 1000

/*
3) Problem Statement 3
You are given an array A of size N containing positive integers.
For each element in the array, count the number of elements to its right that are
smaller than the current element.
Your task is to compute and print a list of counts corresponding to each element.
*/
int findCount(int[], int);
int main() {
	int arr[MAX], n;
	cout << "Enter the number of elements in array: ";
	cin >> n;

	for (int i = 0;i < n;i++) {
		cout << "Enter element " << i + 1 << ":";
		cin >> arr[i];
	}
	
    findCount(arr, n);
	return 0;
}

int findCount(int arr[], int size) {
	int outputArr[MAX],count=0;
	for (int i = 0;i < size;i++) {
		for (int j = i + 1;j < size;j++) {
			if (arr[i] > arr[j]) {
				count++;
			}
		}
		outputArr[i] = count;
		count = 0;
	}
	
	for (int i = 0;i < size;i++) {
		cout << outputArr[i] << " ";
	}
	return 0;
}

//ALL TEST CASE VERIFIED
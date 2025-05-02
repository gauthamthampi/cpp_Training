#include <iostream>
using namespace std;
#define MAX 1000

/*
4)Problem Statement 4
You are given an array A of N positive or negative integers.
Your task is to find the first equilibrium position in the array.
An equilibrium position is an index i such that the sum of elements before 
index i is equal to the sum of elements after index i. Return the first equilibrium 
index (0-based indexing). If no such index exists, return -1.
*/

int findPosition(int[], int);
int main() {
	int arr[MAX], n;
	cout << "Enter the number of elements in array: ";
	cin >> n;

	for (int i = 0;i < n;i++) {
		cout << "Enter element " << i + 1 << ":";
		cin >> arr[i];
	}

	cout << findPosition(arr, n);
	return 0;
}

int findPosition(int arr[], int size) {
    int totalSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    int leftsum = 0;

    for (int i = 0; i < size; i++) {
        totalSum -= arr[i];

        if (leftsum == totalSum) {
            return i;
        }
        leftsum += arr[i];
    }

    return -1;
}

//ALL TEST CASE VERIFIED
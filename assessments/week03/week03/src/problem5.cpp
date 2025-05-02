#include <iostream>
using namespace std;
#define MAX 1000

/*
5)Problem Statement 5
You are given an array A of positive integers. Your task is to find and print all 
the leaders in the array. An element is considered a leader if it is greater 
than all elements to its right. The rightmost element is always considered a leader.
Return the list of leaders in the same order as they appear from right 
to left in the original array.
*/

int findLeader(int[], int);
int main() {
	int arr[MAX], n;
	cout << "Enter the number of elements in array: ";
	cin >> n;

	for (int i = 0;i < n;i++) {
		cout << "Enter element " << i + 1 << ":";
		cin >> arr[i];
	}
	findLeader(arr, n);
	return 0;
}

int findLeader(int arr[], int size) {
	int rightMax = arr[size - 1];
	cout << rightMax << " ";

	for (int i = size - 2; i >= 0; i--) {
		if (arr[i] > rightMax) {
			cout << arr[i] << " ";
			rightMax = arr[i];
		}
	}
	return 0;
}

//ALL TEST CASE VERIFIED
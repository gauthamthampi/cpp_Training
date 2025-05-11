#include <iostream>
using namespace std;
#define MAX 100
int findSecondLargest(int[], int);
int main() {
	int arr[MAX], size;
	cout << "Enter the size of array: ";
	cin >> size;

	for (int i = 0;i < size;i++) {
		cin >> arr[i];
	}
	
	cout << "The second largest number in array is: " << findSecondLargest(arr, size);
	return 0;
}

int findSecondLargest(int arr[], int size) {
	int l1=arr[0], l2 = arr[1], i = 0;
	while (i < size) {
		if (arr[i] > l1) {
			l2 = l1;
			l1 = arr[i];
		}
		i++;
	}
	return l2;
}

/*
//sorting 
int findSecondLargestSorting(int arr[], int size) {
	for (int i = 0;i < size;i++) {
		if (arr[i] < arr[i + 1]) {
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	for()
}
*/
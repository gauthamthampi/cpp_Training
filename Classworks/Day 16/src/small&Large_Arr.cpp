#include <iostream>
using namespace std;
#define MAX 100

int findMaxArr(int[], int);
int findMinArr(int[], int);
int main() 
{
	int arr[MAX], size;
	cout << "Enter size of array";
	cin >> size;

	for (int i = 0;i < size;i++) {
		cout << "Enter element " << i << ": ";
		cin >> arr[i];
	}

	cout << "The largest number in array is: " << findMaxArr(arr, size) << endl;
	cout << "The smallest number in array is: " << findMinArr(arr, size);
	return 0;
}

int findMaxArr(int arr[], int size) {
	int max = arr[size - 1],i=0;
	while (i < size-1) {
		if (arr[i] > max) {
			max = arr[i];
		}
		i++;
	}
	return max;
}

int findMinArr(int arr[], int size) {
	int min = arr[0],i=1;
	while (i < size ) {
		if (arr[i] < min) {
			min = arr[i];
		}
		i++;
	}
	return min;
}
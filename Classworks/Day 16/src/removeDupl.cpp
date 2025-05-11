#include <iostream>
using namespace std;
#define MAX 100
int removeDuplicatesArr(int[], int);
int main() {
	int arr[MAX], size;
	cout << "Enter the size of array: ";
	cin >> size;

	for (int i = 0;i < size;i++) {
		cin >> arr[i];
	}

	//cout << "The second largest number in array is";
	removeDuplicatesArr(arr, size);
	return 0;
}

int removeDuplicatesArr(int arr[], int size) {
	for (int i = 0;i < size;i++) {
		for (int j = i + 1;j < size;) {
			if (arr[i] == arr[j]) {
				for (int k = j;k < size;k++) {
					arr[k] = arr[k + 1];
					
				}
				size--;
			}
			else {
				j++;
			}
		}
	}

	for (int i = 0;i < size;i++) {
		cout << arr[i] << " ";
	}
	return 0;
}


int remDup(int arr[], int size) {
	int newSize = 0;
	
	for (int i = 0;i < size;i++) {
		bool flag = false;

		for (int j = i + 1;j < size;j++) {
			if (arr[i] == arr[j]) {
				flag = true;
				break;
			}
		}

		if (!flag) {
			arr[newSize++] = arr[i];
		}
	}

	for (int i = 0;i < size;i++) {
		cout << arr[i] << " ";
	}
	return 0;

}
#include <iostream>
using namespace std;
#define MAX 1024

/*
6) You are given an array arr[] of size N containing positive integers. Your task 
is to reverse every sub-array of size K.
If the number of elements left at the end is less than K, 
reverse all of them as is.
*/

int reverseArr(int[], int, int);
int main() {
    int arr[MAX], n, k;
    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter K value: ";
    cin >> k;

    reverseArr(arr, n, k);
    return 0;
}

int reverseArr(int arr[], int size, int k) {
    for (int i = 0; i < size; i += k) {
        int start = i;
        int end = i + k - 1;

        if (end >= size) {
            end = size - 1;
        }

        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


//ALL TEST CASE VERIFIED
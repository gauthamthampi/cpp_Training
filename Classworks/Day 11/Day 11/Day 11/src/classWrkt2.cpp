#include <iostream>
using namespace std;
/*
#ifdef __INTELLISENSE__
#pragma diag_suppress 28  // Suppress specific diagnostic (warning 28)
#endif   */

// classworks/arrays01

//1 find continous sub-arr
/*
int main() {
	int size,sum;
	cout << "Enter size of array: ";
	cin >> size;

	int* arr = new int[size];

	for (int i = 0;i < size;i++) {
		cout << "Enter number : " << i + 1;
		cin >> arr[i];
	}

	cout << "Enter sum: ";
	cin >> sum;

	for (int i = 0;i < size;i++) {
		for (int j = i+1;j < size;j++) {
			if (arr[i] + arr[j] == sum) {
				cout << "Sum found between indexes " << i << " and " << j << ".";
				return 0;
			}
		}
	}
	cout << "No subarray found";
	return 0;
}
*/
//2)equilibrium pos
/*
int main() {
    int size, sum;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size];  

    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int totalSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    int leftsum = 0;

    for (int i = 0; i < size; i++) {
        totalSum -= arr[i];

        if (leftsum == totalSum) {
            cout << "The equilibrium position is: " << i << endl;
            delete[] arr;  
            return 0;
        }

        leftsum += arr[i];
    }

    cout << "No equilibrium position" << endl;

    delete[] arr;  
    return 0;
}
*/

//3 rightmost leader
int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size]; 

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int maxFromRight = arr[size - 1];  
    cout << maxFromRight << " ";      

    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            cout << arr[i] << " ";  
            maxFromRight = arr[i]; 
        }
    }

    delete[] arr;  
    return 0;
}

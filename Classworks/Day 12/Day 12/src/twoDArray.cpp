#include <iostream>
using namespace std;

//multiplication of 2d matrix

//to find the size of 2d array
//row  = sizeof(arr)/sizeof(arr[0]);
//col = sizeof(arr[0]/sizeof(arr[0][0]);

int main() {
    int rowA, colA, rowB, colB;

    //  rows and columns for matrix A
    cout << "Enter number of rows and columns for matrix A: ";
    cin >> rowA >> colA;

    //  rows and columns for matrix B
    cout << "Enter number of rows and columns for matrix B: ";
    cin >> rowB >> colB;

    // Check if the matrices can be multiplied
    if (colA != rowB) {
        cout << "Matrix multiplication not possible. Number of columns in A must be equal to the number of rows in B." << endl;
        return 0;
    }

    // Dynamically allocate memory for the matrices
    int** a = new int* [rowA];  
    int** b = new int* [rowB];  
    int** result = new int* [rowA];  

    for (int i = 0; i < rowA; i++) {
        a[i] = new int[colA];  // Allocate columns for matrix A
    }

    for (int i = 0; i < rowB; i++) {
        b[i] = new int[colB];  // Allocate columns for matrix B
    }

    for (int i = 0; i < rowA; i++) {
        result[i] = new int[colB];  // Allocate columns for result matrix
        for (int j = 0; j < colB; j++) {
            result[i][j] = 0;  // Initialize result matrix with 0
        }
    }

    // Input matrix A
    cout << "Enter elements for matrix A (" << rowA << "x" << colA << "):\n";
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            cout << "Enter element a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    // Input  matrix B
    cout << "Enter elements for matrix B (" << rowB << "x" << colB << "):\n";
    for (int i = 0; i < rowB; i++) {
        for (int j = 0; j < colB; j++) {
            cout << "Enter element b[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }

    // Matrix multiplication
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            for (int k = 0; k < colA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display
    cout << "\nResulting Matrix (" << rowA << "x" << colB << "):\n";
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}



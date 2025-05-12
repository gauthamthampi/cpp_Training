//27) Write a Program to Print a Diamond Pattern
/*
             *
            ***
           *****
          *******
           *****
            ***
             *
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n-i;j++) {
            cout << " ";
        }
        for (int k = 0;k <= i ;k++) {
            cout << "*";
        }
        for (int l = 0;l < i;l++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n;i >= 0;i--) {
        for (int j = 0;j < n - i;j++) {
            cout << " ";
        }
        for (int k = 0;k <= i;k++) {
            cout << "*";
        }
        for (int l = 0;l < i;l++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
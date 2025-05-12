//44) Write a Program to Check for the Equality of Two Numbers Without Using Arithmetic or Comparison Operator
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    if ((a ^ b) == 0) {
        cout << "Equal." << endl;
    }
    else {
        cout << "Not equal." << endl;
    }

    return 0;
}

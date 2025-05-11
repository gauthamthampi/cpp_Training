//62) Check if Two Numbers are Equal Using Only Bitwise XOR
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    if ((a ^ b) == 0) {
        cout << "The numbers are equal." << endl;
    }
    else {
        cout << "The numbers are not equal." << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

// Function that uses call by reference
void modifyValue(int& ref) {
    ref = 10; // Directly modifying the original variable through the reference
    cout << "Inside function, value = " << ref << endl;
}

int main() {
    int num = 5;
    cout << "Before function call, num = " << num << endl;

    modifyValue(num); // Passing by reference

    cout << "After function call, num = " << num << endl;
    return 0;
}

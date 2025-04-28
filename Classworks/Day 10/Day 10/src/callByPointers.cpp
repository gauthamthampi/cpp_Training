#include <iostream>
using namespace std;

// Function that uses call by pointer
void modifyValue(int* ptr) {
    *ptr = 10; // Dereferencing the pointer to modify the original value
    cout << "Inside function, value = " << *ptr << endl;
}

int main() {
    int num = 5;
    cout << "Before function call, num = " << num << endl;

    modifyValue(&num); // Passing the address of 'num' (call by pointer)

    cout << "After function call, num = " << num << endl;
    return 0;
}

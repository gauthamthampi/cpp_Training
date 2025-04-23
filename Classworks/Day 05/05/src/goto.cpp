#include <iostream>
using namespace std;

int goto() {
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number < 0) {
        goto error;  // jumps to the error label if number is negative
    }

    cout << "You entered: " << number << endl;
    return 0;

error:
    cout << "Error: Number must be positive!" << endl;
    return 1;
}

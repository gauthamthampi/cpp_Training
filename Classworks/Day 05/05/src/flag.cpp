#include <iostream>
using namespace std;

int flag() {
    bool isValid = false; // flag variable
    int number;

    while (!isValid) {
        cout << "Enter a positive number: ";
        cin >> number;

        if (number > 0) {
            isValid = true; // set flag to true when valid input is received
        }
        else {
            cout << "Invalid input. Try again." << endl;
        }
    }

    cout << "You entered a valid number: " << number << endl;

    return 0;
}

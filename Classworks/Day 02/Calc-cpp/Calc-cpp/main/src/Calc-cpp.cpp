// Calc-cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../inc/operations.h"

using namespace std;


int main() {
    int a, b, choice;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "\nChoose operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter choice (1-4): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Result: " << add(a, b) << endl;
        break;
    case 2:
        cout << "Result: " << subtract(a, b) << endl;
        break;
    case 3:
        cout << "Result: " << multiply(a, b) << endl;
        break;
    case 4:
        if (b == 0)
            cout << "Error: Division by zero!\n";
        else
            cout << "Result: " << divide(a, b) << endl;
        break;
    default:
        cout << "Invalid choice.\n";
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

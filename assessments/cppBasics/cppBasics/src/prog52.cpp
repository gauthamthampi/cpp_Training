//52) Write a program in C++ to check whether the primitive values crossing the limits or not.

#include <iostream>
#include <climits>  
#include <cfloat>   
using namespace std;

void checkIntegerLimit(int value) {
    if (value < INT_MIN) {
        cout << "The integer value is below the minimum limit for int." << endl;
    }
    else if (value > INT_MAX) {
        cout << "The integer value is above the maximum limit for int." << endl;
    }
    else {
        cout << "The integer value is within the limits for int." << endl;
    }
}

void checkLongLimit(long value) {
    if (value < LONG_MIN) {
        cout << "The long value is below the minimum limit for long." << endl;
    }
    else if (value > LONG_MAX) {
        cout << "The long value is above the maximum limit for long." << endl;
    }
    else {
        cout << "The long value is within the limits for long." << endl;
    }
}

void checkFloatLimit(float value) {
    if (value < FLT_MIN) {
        cout << "The float value is below the minimum limit for float." << endl;
    }
    else if (value > FLT_MAX) {
        cout << "The float value is above the maximum limit for float." << endl;
    }
    else {
        cout << "The float value is within the limits for float." << endl;
    }
}

void checkDoubleLimit(double value) {
    if (value < DBL_MIN) {
        cout << "The double value is below the minimum limit for double." << endl;
    }
    else if (value > DBL_MAX) {
        cout << "The double value is above the maximum limit for double." << endl;
    }
    else {
        cout << "The double value is within the limits for double." << endl;
    }
}

int main() {
    int intVal;
    cout << "Enter an integer value: ";
    cin >> intVal;
    checkIntegerLimit(intVal);

    long longVal;
    cout << "Enter a long value: ";
    cin >> longVal;
    checkLongLimit(longVal);

    float floatVal;
    cout << "Enter a float value: ";
    cin >> floatVal;
    checkFloatLimit(floatVal);

    double doubleVal;
    cout << "Enter a double value: ";
    cin >> doubleVal;
    checkDoubleLimit(doubleVal);

    return 0;
}

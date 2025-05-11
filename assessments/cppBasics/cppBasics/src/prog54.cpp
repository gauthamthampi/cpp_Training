//54) Write a program in C++ to convert temperature in Fahrenheit to Celsius.
#include <iostream>
using namespace std;

int main() {
    int fahrenheit, celsius;
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout <<  celsius << endl;
    return 0;
}

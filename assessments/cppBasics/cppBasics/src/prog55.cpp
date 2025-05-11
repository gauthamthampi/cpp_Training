//55) Write a program in C++ that converts kilometers per hour to miles per hour.

#include <iostream>
using namespace std;

int main() {
    int km, miles;
    cin >> km;
    miles = km * 0.621371;
    cout << miles << " miles per hour." << endl;
    return 0;
}

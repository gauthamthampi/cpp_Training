#include <iostream>
using namespace std;

// Function that uses pass by value
void modifyValue(int x) {
    x = 10; // This change will not affect the original argument
    cout << "Inside function, x = " << x << endl;
}

int main() {
    int num = 5;
    cout << "Before function call, num = " << num << endl;

    modifyValue(num); // Pass by value

    cout << "After function call, num = " << num << endl;
    return 0;
}

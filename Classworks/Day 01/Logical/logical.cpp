#include <iostream>
using namespace std;

int main() {
    bool x = true;
    bool y = false;
    cout << "x && y (AND): " << (x && y) << endl;  // false = 0
    cout << "x || y (OR): " << (x || y) << endl;   // true = 1
    cout << "!x (NOT x): " << (!x) << endl;        // false = 0
    cout << "!y (NOT y): " << (!y) << endl;        // true = 1
    return 0;
}

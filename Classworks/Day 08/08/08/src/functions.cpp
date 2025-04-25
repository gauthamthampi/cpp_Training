#include <iostream>
using namespace std;

// No input args and no return type
void display() {
    cout << "Hello, world!" << endl;
}

// With input and no return type
void display2(string str) {
    cout << "Hello " << str << "!" << endl;
}

// With input and return type
int display3(int i) {
    cout << "Adding 10 to " << i << " gives " << i + 10 << endl;
    return 0;
}

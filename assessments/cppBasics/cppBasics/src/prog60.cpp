//60) Swap two numbers using xor operator
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a;
    cin >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}


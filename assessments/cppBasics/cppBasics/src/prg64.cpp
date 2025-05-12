//64) Check if character is uppercase 
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase letter." << endl;
    }
    else {
        cout << ch << " is not an uppercase letter." << endl;
    }
    return 0;
}

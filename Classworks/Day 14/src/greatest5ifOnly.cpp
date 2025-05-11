#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    int high = 0;
    cout << "Enter five numbers:" << endl;
   
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    cout << "Enter number 3: ";
    cin >> c;
    cout << "Enter number 4: ";
    cin >> d;
    cout << "Enter number 5: ";
    cin >> e;
    high = a;
    if (high <= b) {
        high = b;
    }
    if (high <= c) {
        high = c;
    }
    if (high <= d) {
        high = d;
    }
    if (high <= e) {
        high = e;
    }
    
    cout << "The highest number is : " << high;

    return 0;
}
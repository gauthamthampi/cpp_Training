//53) Write a program in C++ to find the area and circumference of a circle.

#include <iostream>
using namespace std;

int main() {
    float radius;
    cin >> radius;

    float area = 3.14 * radius * radius;  
    double circumference = 2 * 3.14 * radius; 

    cout << "The area: " << area << endl;
    cout << "The circumference: " << circumference << endl;

    return 0;
}

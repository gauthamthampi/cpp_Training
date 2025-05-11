//45) Write a Program to Find the Maximum and Minimum of the Two Numbers Without Using the Comparison Operator
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    int d = a - b;

    int maxVal = a - (d & (d >> 31));  
    int minVal = b + (d & (d >> 31));  

    cout << maxVal << endl;
    cout << minVal << endl;

    return 0;
}

//49) Write a Program for Decimal Octal Conversion
#include <iostream>
using namespace std;

void decimalToOctal(int);

int main() {
    int num;
    cin >> num;
    decimalToOctal(num);
    return 0;
}

void decimalToOctal(int num) {
    if (num == 0) {
        cout << "0";  
        return;
    }

    int oct[10];  
    int i = 0;  

    while (num > 0) {
        oct[i] = num % 8;  
        num = num / 8;  
        i++;  
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << oct[j];  
    }
}

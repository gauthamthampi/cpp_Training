//47) Write a Program for Hexadecimal to Decimal Conversion

#include <iostream>
using namespace std;

int hexToDecimal(const char[]);  

int main() {
    char hexNum[20];  
    cin >> hexNum;  
    cout << hexToDecimal(hexNum);  
    return 0;
}

int hexToDecimal(const char hexNum[]) {
    int decimal = 0;
    int len = 0;

    while (hexNum[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i++) {
        char digit = hexNum[i];
        int digitValue;

        if (digit >= '0' && digit <= '9') {
            digitValue = digit - '0';  
        }
        else if (digit >= 'A' && digit <= 'F') {
            digitValue = digit - 'A' + 10;  
        }
        else if (digit >= 'a' && digit <= 'f') {
            digitValue = digit - 'a' + 10; 
        }
        else {
            cout << "Invalid hexadecimal number" << endl;
            return -1;  
        }

        decimal += digitValue * pow(16, len - 1 - i);
    }

    return decimal;
}

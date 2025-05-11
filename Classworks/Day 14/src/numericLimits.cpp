#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "Integer types:\n";
    cout << "int: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
    cout << "unsigned int: " << numeric_limits<unsigned int>::min() << " to " << numeric_limits<unsigned int>::max() << endl;
    cout << "long: " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;
    cout << "unsigned long: " << numeric_limits<unsigned long>::min() << " to " << numeric_limits<unsigned long>::max() << endl;
    cout << "long long: " << numeric_limits<long long>::min() << " to " << numeric_limits<long long>::max() << endl;
    cout << "unsigned long long: " << numeric_limits<unsigned long long>::min() << " to " << numeric_limits<unsigned long long>::max() << endl;
    cout << "==================================================";
    cout << "\nChar:\n";
    cout << "char: " << +numeric_limits<char>::min() << " to " << +numeric_limits<char>::max() << endl;
    cout << "signed char: " << +numeric_limits<signed char>::min() << " to " << +numeric_limits<signed char>::max() << endl;
    cout << "unsigned char: " << +numeric_limits<unsigned char>::min() << " to " << +numeric_limits<unsigned char>::max() << endl;
    cout << "short: " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
    cout << "unsigned short: " << numeric_limits<unsigned short>::min() << " to " << numeric_limits<unsigned short>::max() << endl;
    cout << "==================================================";
    cout << "\nFloating-point types:\n";
    cout << "float: " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;
    cout << "double: " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << endl;
    cout << "long double: " << numeric_limits<long double>::min() << " to " << numeric_limits<long double>::max() << endl;
    cout << "==================================================";
    cout << "\nBoolean:\n";
    cout << "bool: " << numeric_limits<bool>::min() << " to " << numeric_limits<bool>::max() << endl;

    return 0;
}

/*
o/p:
Integer types:
int: -2147483648 to 2147483647
unsigned int: 0 to 4294967295
long: -2147483648 to 2147483647
unsigned long: 0 to 4294967295
long long: -9223372036854775808 to 9223372036854775807
unsigned long long: 0 to 18446744073709551615
==================================================
Char:
char: -128 to 127
signed char: -128 to 127
unsigned char: 0 to 255
short: -32768 to 32767
unsigned short: 0 to 65535
==================================================
Floating-point types:
float: 1.17549e-38 to 3.40282e+38
double: 2.22507e-308 to 1.79769e+308
long double: 2.22507e-308 to 1.79769e+308
==================================================
Boolean:
bool: 0 to 1
*/
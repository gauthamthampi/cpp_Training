#include <iostream>
#include <cmath>  
using namespace std;

/*Example:
Input: 153
Output : Armstrong number
explanation :
(since(1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153))
*/

int main() {
    int num, sum = 0, value, digits = 0;

    cout << "Enter the number: ";
    cin >> num;
    value = num;

    if (num < 0) {
        cout << "Armstrong numbers are only non-negative." << endl;
        return 0;
    }

    while (num > 0) {
        num /= 10;
        digits++;
    }

    num = value;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);  
        num /= 10;
    }

    if (sum == value) {
        cout << value << "Yes, is an Armstrong Number" << endl;
    }
    else {
        cout << value << " Not an Armstrong Number" << endl;
    }

    return 0;
}


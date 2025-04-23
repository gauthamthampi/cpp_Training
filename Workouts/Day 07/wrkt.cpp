#include <iostream>
using namespace std;

// Q1: Sum and Product of Digits
void sumAndProductOfDigits() {
    int n, sum = 0, product = 1;
    cout << "Q1 - Enter the number: ";
    cin >> n;

    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        if (digit != 0) {
            product *= digit;
        }
        n /= 10;
    }

    cout << "The sum is: " << sum << " and product is: " << product << endl;
}

// Q2: Ways to Divide Number into 4 Parts 
void divideInto4Parts() {
    int n;
    cout << "Q2 - Enter number: ";
    cin >> n;

    for (int i = 1; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = j; k < n; k++) {
                for (int l = k; l < n; l++) {
                    if ((i + j + k + l) == n) {
                        cout << i << "+" << j << "+" << k << "+" << l << endl;
                    }
                }
            }
        }
    }
}

// Q3: Multiplication Table from Start to End
void printTables() {
    int st, end;
    cout << "Q3 - Enter start number: ";
    cin >> st;
    cout << "Q3 - Enter end number: ";
    cin >> end;

    for (int i = st; i <= end; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << j << " x " << i << " = " << (j * i) << endl;
        }
        cout << "================" << endl;
    }
}

// Q4: Check if Sum of Distinct Digits of Two Numbers Are Equal
void checkEqualDistinctDigitSum() {
    int num1, num2;
    cout << "Q4 - Enter two numbers: ";
    cin >> num1 >> num2;

    bool seen1[10] = {false};
    bool seen2[10] = {false};
    int sum1 = 0, sum2 = 0;

    int temp = num1;
    while (temp > 0) {
        int digit = temp % 10;
        if (!seen1[digit]) {
            sum1 += digit;
            seen1[digit] = true;
        }
        temp /= 10;
    }

    temp = num2;
    while (temp > 0) {
        int digit = temp % 10;
        if (!seen2[digit]) {
            sum2 += digit;
            seen2[digit] = true;
        }
        temp /= 10;
    }

    if (sum1 == sum2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

// Q5: Product of Odd and Even Position Digits in a 4-digit Number
void checkProductOddEvenPositions() {
    int num;
    cout << "Q5 - Enter a 4-digit number: ";
    cin >> num;

    if (num < 1000 || num > 9999) {
        cout << "Please enter a 4-digit number only." << endl;
        return;
    }

    int oddProduct = 1;
    int evenProduct = 1;
    int position = 1;

    while (num > 0) {
        int digit = num % 10;
        if (position % 2 == 0) {
            evenProduct *= digit;
        } else {
            oddProduct *= digit;
        }
        num /= 10;
        position++;
    }

    if (oddProduct == evenProduct) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}


int main() {
            // sumAndProductOfDigits(); 
            // divideInto4Parts(); 
            // printTables(); 
            // checkEqualDistinctDigitSum(); 
            // checkProductOddEvenPositions(); 
    return 0;
}

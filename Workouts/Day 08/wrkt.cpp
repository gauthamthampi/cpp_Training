#include <iostream>
using namespace std;

// function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// Q1) Find the Nth number made up of prime digits only
// Prime digits: 2, 3, 5, 7
void findNthPrimeDigitNumber(int n) {
    int count = 0, number = 0;
    while (count < n) {
        number++;
        int temp = number;
        bool isValid = true;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 2 && digit != 3 && digit != 5 && digit != 7) {
                isValid = false;
                break;
            }
            temp /= 10;
        }
        if (isValid) {
            count++;
        }
    }
    cout << "The " << n << "th number made of prime digits is: " << number << endl;
}

// Q2) Count number of ways to express a number as sum of two prime numbers
void countPrimeSumWays(int num) {
    int count = 0;
    cout << "Ways to express " << num << " as sum of two primes:" << endl;
    for (int i = 2; i <= num / 2; i++) {
        int j = num - i;
        if (isPrime(i) && isPrime(j)) {
            cout << num << " = " << i << " + " << j << endl;
            count++;
        }
    }
    cout << "No of ways: " << count << endl;
}

// Q3) Menu with switch: Factorial and Fibonacci

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

void menuFactorialFibonacci() {
    int choice, number;
    cout << "\n=== MENU ===\n";
    cout << "1. Factorial\n";
    cout << "2. Fibonacci\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice != 1 && choice != 2) {
        cout << "Invalid choice." << endl;
        return;
    }

    cout << "Enter a number: ";
    cin >> number;

    switch (choice) {
        case 1:
            cout << "Factorial of " << number << " is: " << factorial(number) << endl;
            break;
        case 2:
            cout << "Fibonacci number at position " << number << " is: " << fibonacci(number) << endl;
            break;
    }
}

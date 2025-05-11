//59)Calculate compound interest
#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    double principal, rate, time, amount, compoundInterest;
    int n;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the annual interest rate: ";
    cin >> rate;

    cout << "Enter the time: ";
    cin >> time;

    cout << "Enter the number of times interest is compounded per year: ";
    cin >> n;

    rate = rate / 100;

    amount = principal * pow(1 + rate / n, n * time);
    compoundInterest = amount - principal;
    cout << "Amount after " << time << " years: " << amount << endl;
    cout << "Compound Interest: " << compoundInterest << endl;

    return 0;
}

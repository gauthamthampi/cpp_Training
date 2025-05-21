#include <iostream>
#include "bank.h"
using namespace std;


void bank::deposit(int d) {
	balance += d;
	cout << "Cash deposited successfully."<<endl;
	cout << "Current Balance: " << balance << endl;
}

void bank::withdraw(int w) {
	balance -= w;
	cout << "Cash withdrawed successfully." << endl;
	cout << "Current Balance: " << balance << endl;
}

int bank::checkBalance() {
	return balance;
}

bool bank::checkPin(int p) {
	if (pin == p)
		return true;
	else
		return false;
}

void bank::menu() {
    int choice, count = 0;
    cout << "State Bank of India" << endl;
    cout << "Enter your pin: ";
    cin >> pin;

    while (count < 3) {
        if (checkPin(pin)) {
            do {
                cout << "1) Deposit money" << endl;
                cout << "2) Withdraw money" << endl;
                cout << "3) Balance enquiry" << endl;
                cout << "4) Cancel transaction" << endl;
                cout << "Enter option: ";
                cin >> choice;
                switch (choice) {
                case 1: {
                    int dep;
                    cout << "Enter money to deposit: ";
                    cin >> dep;
                    deposit(dep);
                    break;
                }
                case 2: {
                    int wdl;
                    cout << "Enter money to withdraw: ";
                    cin >> wdl;
                    withdraw(wdl);
                    break;
                }
                case 3: {
                    int bal = checkBalance();
                    cout << "Current balance: " << bal << endl;
                    break;
                }
                case 4:
                    cout << "Cancelling the transaction..." << endl;
                    return;  
                default:
                    cout << "Invalid option. Try again!" << endl;
                    break;
                }
            } while (choice != 4);
            return; 
        }
        else {
            count++;
            if (count < 3) {
                cout << "Incorrect pin! Try again. Attempts remaining: " << (3 - count) << endl;
                cout << "Enter your pin: ";
                cin >> pin;
            }
            else {
                cout << "Too many failed attempts. Exiting..." << endl;
                return;  
            }
        }
    }
	} 



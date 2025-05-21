#pragma once
#include <iostream>
using namespace std;

class bank {
private:
	int balance = 0;
	int pin = 1234;
	string accountHolder;
	void deposit(int);
	void withdraw(int);
	int checkBalance();
	bool checkPin(int);
public:
	void menu();
};
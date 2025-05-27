#include <iostream>
#include "prog3.h"
#include <string>
using namespace std;

int main() {
	int id, rate, distance, days;
	string type;

	cout << "Enter Vehicle type: ";
	cin.ignore(); 
	getline(cin, type); 

	cout << "Enter id: "; cin >> id;
	cout << "Enter Rate per km: "; cin >> rate;
	cout << "Enter distance: "; cin >> distance;
	cout << "Enter days: "; cin >> days;
	Vehicle v(id, type, rate, distance, days);
	v.display();
	return 0;
}
#include <iostream>
#include "this.h"
using namespace std;


void Employee::set_e_id(int emp_id) {
	this->emp_id = emp_id;
}

void Employee::set_e_name(string e_name) {
	this->e_name = e_name;
}

void Employee::set_e_address(string e_address) {
	this->e_address = e_address;
}

void Employee::set_e_phone(int e_phone) {
	this->e_phone = e_phone;
}

int Employee::get_e_id() {
	return this->emp_id;
}

string Employee::get_e_name() {
	return this->e_name;
}

string Employee::get_e_address() {
	return this->e_address;
}

int Employee::get_e_phone() {
	return this->e_phone;
}


int main() {
	Employee e;
	e.set_e_id(12);e.set_e_name("Babuji");e.set_e_phone(1234);e.set_e_address("Burj Khalifa");
	cout << "Id: " << e.get_e_id() << endl;
	cout << "Name: " << e.get_e_name() << endl;
	cout << "Address: " << e.get_e_address() << endl;
	cout << "Phone: " << e.get_e_phone() << endl;
}
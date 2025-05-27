#pragma once
#include <iostream>
using namespace std;


class Employee {
	int emp_id;
	string e_name;
	string e_address;
	int e_phone;
public:
	void set_e_id(int);
	void set_e_name(string);
	void set_e_address(string);
	void set_e_phone(int);

	int get_e_id();
	string get_e_name();
	string get_e_address();
	int get_e_phone();
};
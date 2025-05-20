#include <iostream>
using namespace std;

struct Date {
	int day, month, year;
};

struct Address {
	int hno;
	int pincode;
	string addLine1;
	string addLine2;
	string city;
	string state;
};

struct Employee {
	int id;
	string name;
	Date joiningDate;
	Address address;
};

int main() {
    struct Employee e;
	Employee* e1 = (Employee*)malloc(sizeof(Employee) * 3);
	e.id = 1;
	e.name = "Shaji";
	e.joiningDate.day = 2;
	e.joiningDate.month = 4;
	e.joiningDate.year = 2020;
	e.address.hno = 23;
	e.address.pincode = 69083;
	e.address.addLine1 = "Sankar Lane";
	e.address.addLine2 = "Sasthamangalam";
	e.address.city = "Thiruvananthapuram";
	e.address.state = "Kerala";
	cout << e.id << " " << e.name << " " << e.joiningDate.day << "-" << e.joiningDate.month << "-" << e.joiningDate.year << endl;
	cout << sizeof(e1);  //8 - pointer on 64bits
	e1->id = 4;
	
	return 0;
}
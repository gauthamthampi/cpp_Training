#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <iterator>
using namespace std;

class Employee {
	int emp_id;
	string name;
public:
	Employee():emp_id(0),name(""){}
	Employee(int id,string name):emp_id(id),name(name){}
	void display() const {
		cout << "ID: " << emp_id << "\tName: " << name << endl;
	}
	int getId() {
		return emp_id;
	}
	string getName() {
		return name;
	}
	void setId(int id) {
		this->emp_id = id;
	}
	void setName(string name) {
		this->name = name;
	}
	friend istream& operator>>(istream& in, Employee& e);
};

istream& operator>>(istream& in, Employee& e) {
	in >> e.emp_id >> e.name;
	return in;
}

int main() {	
	istream_iterator<Employee>inp(cin);
	istream_iterator<Employee>endIt;
	list<Employee>emp(inp,endIt);
	cout << emp.size();
	for (auto e : emp) {
		e.display();
	}

	return 0;
}


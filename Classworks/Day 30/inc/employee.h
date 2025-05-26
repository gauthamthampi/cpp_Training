#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
	int id;
	string name;
	float salary;
public:
	void setId(int Id) {
		id = Id;
	}
	void setName(string nm) {
		name = nm;
	}
	void setSalary(float sal) {
		salary = sal;
	}

	int getId() {
		return id;
	}
	string getName() {
		return name;
	}
	float getSalaray() {
		return salary;
	}
};

class Node {
private:
	Employee emp;
	Node* next;
public:
	Node(Employee em) {
		emp = em;
		next = nullptr;
	}
	void setValue(Employee em) {
		emp = em;
	}
	void setNext(Node* ptr) {
		next = ptr;
	}
	Employee& getValue() {
		return emp;
	}
	Node* getNext() {
		return next;
	}

};

class LinkedList {
private:
	Node* head;
public:
	LinkedList() {
		head = nullptr;
	}
	void addEmployee(Employee em) {
		Node* newNode = new Node(em);
		newNode->setNext(head);
		head = newNode;
	}
	void deleteEmployeeById(int id) {
		Node* temp = head;
		Node* prev = nullptr;
		while (temp != nullptr) {
			if (temp->getValue().getId() == id) {
				if (prev == nullptr) {
					head = temp->getNext();
					delete temp;
					cout << "Employee deleted successfully." << endl;
					return;
				}
				else {
					prev->setNext(temp->getNext());
					delete temp;
					cout << "Employee deleted successfully." << endl;
					return;
				}
			}
			prev = temp;
			temp = temp->getNext();
		}
	}

	void searchEmployeeByName(string name) {
		Node* temp = head;
		while (temp != nullptr) {
			if (temp->getValue().getName() == name) {
				cout << "Employee found in address: " << temp << endl;
				return;
			}
			temp = temp->getNext();
		}
		cout << "User does not exist.";
		return;
	}

	void updateSalaryById(int id,float sal) {
		Node* temp = head;
		while (temp != nullptr) {
			if (temp->getValue().getId() == id) {
				temp->getValue().setSalary(sal);
				cout << "Salary updated successfully!";
				return;
			}
			temp = temp->getNext();
		}
		cout << "User does not exist.";
		return;
	}

	int countEmployees() {
		Node* temp = head;
		int count = 0;
		while (temp != nullptr) {
			count++;
			temp = temp->getNext();
		}
		return count;
	}

	void displayEmployees() {
		Node* temp = head;
		int count = 1;
		while (temp != nullptr) {
			cout << count << ") " << temp->getValue().getName() << " - " << 
				temp->getValue().getId() << " - " << temp->getValue().getSalaray() << endl;
			count++;
			temp = temp->getNext();
		}
	}

	void menu() {
		int choice, val, id=1;
		string nm;
		float sal;
		Employee emp;
		while (true) {
			cout << "1. Add Employee" << endl;
			cout << "2. Display all employees" << endl;
			cout << "3. Delete employee by id" << endl;
			cout << "4. Search employee by name" << endl;
			cout << "5. Update employee by salary" << endl;
			cout << "6. Count employees" << endl;
			cout << "7. Exit" << endl;
			cout << "Enter your choice: ";
			cin >> choice;

			switch (choice) {
			case 1:
				cout << "Enter the employee details: " << endl;
				cout << "Enter name: "; 
				cin.ignore();
				getline(cin,nm);
				cout << "Enter salary: "; cin >> sal;
				emp.setId(id); emp.setName(nm); emp.setSalary(sal);
				addEmployee(emp);
				id++;
				break;
			case 2:
				displayEmployees();
				break;
			case 3:
				cout << "Enter the id: ";
				cin >> val;
				deleteEmployeeById(val);
				break;
			case 4:
				cout << "Enter the name to search: ";
				cin >> nm;
				searchEmployeeByName(nm);
				break;
			case 5:
				cout << "Enter the id: ";
				cin >> val;
				cout << "Enter the new Salary: ";
				cin >> sal;
				updateSalaryById(val, sal);
				break;
			case 6:
				cout << "Number of employees are: " << countEmployees() << endl;
				break;
			case 7:
				exit(EXIT_SUCCESS);
			default:
				cout << "Invalid choice. Try again." << endl;
			}
		}
	}

};




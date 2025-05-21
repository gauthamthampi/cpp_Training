#include <iostream>
#include <string>  
using namespace std;

#define MAX 100

struct Date {
    int day, month, year;
};

struct Salary {
    int daysWorked;
    int basePay;
    int allowance;
    int tax;
    int salarayinHand;
};

struct Emp {
    int emp_id;
    string emp_name;
    Date dateOfJoining;
    Salary salary;
};

Emp arr[MAX];  
int empCount = 0;  

bool isValidName(string& name) {
    for (char ch : name) {
        if (!isalpha(ch) && ch != ' ') {
            return false;  
        }
    }
    return true;  
}


void addEmployee() {
    if (empCount >= MAX) {
        cout << "Limit exceeded. Cannot add more employees." << endl;
        exit(1);  
    }

    Emp* e = &arr[empCount];  

    cout << "Enter the employee details below:" << endl;
    cout << "Enter the ID: ";
    cin >> e->emp_id;
    cout << "Enter the name: ";
    cin.ignore(); 
    getline(cin, e->emp_name);
    while (!isValidName(e->emp_name)) {
        cout << "Invalid input. Try again..."<<endl;
        cout << "Enter the name: ";
        cin >> e->emp_name;
    }

    cout << "Enter the Day of joining: ";
    cin >> e->dateOfJoining.day;
    cout << "Enter the Month of joining: ";
    cin >> e->dateOfJoining.month;
    cout << "Enter the Year of joining: ";
    cin >> e->dateOfJoining.year;

    cout << "Enter the base pay(per day): ";
    cin >> e->salary.basePay;
    cout << "Enter the allowance: ";
    cin >> e->salary.allowance;
    cout << "Enter the tax: ";
    cin >> e->salary.tax;
    cout << "Enter the number of days worked: ";
    cin >> e->salary.daysWorked;

    e->salary.salarayinHand = e->salary.basePay * e->salary.daysWorked + e->salary.allowance - e->salary.tax;
    empCount++;
}

void display() {
    if (empCount == 0) {
        cout << "No employees to display." << endl;
        return;
    }

    for (int i = 0; i < empCount; i++) {
        cout << "\nEmployee ID: " << arr[i].emp_id << endl;
        cout << "Name: " << arr[i].emp_name << endl;
        cout << "Date of Joining: " << arr[i].dateOfJoining.day << "/"
            << arr[i].dateOfJoining.month << "/" << arr[i].dateOfJoining.year << endl;
        cout << "Base Pay: " << arr[i].salary.basePay << endl;
        cout << "Allowance: " << arr[i].salary.allowance << endl;
        cout << "Tax: " << arr[i].salary.tax << endl;
        cout << "Days Worked: " << arr[i].salary.daysWorked << endl;
        cout << "Salary in Hand: " << arr[i].salary.salarayinHand << endl;
        cout << "-------------------------" << endl;
    }
}

int main() {
    int choice;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display All Employees" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addEmployee();  
            break;
        case 2:
            display(); 
            break;
        case 3:
            cout << "Exiting program..." << endl;
            exit(0);  
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

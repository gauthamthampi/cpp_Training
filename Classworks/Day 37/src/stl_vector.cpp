#include <iostream>
#include <vector>

using namespace std;

class Student {
	int id;
	string name;
public:
	Student(int id,string nm):id(id),name(nm){}
	void display() {
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
	}
};

int main() {
	try {
		Student s[3] = { {1,"Arun"},{2,"Sreelekshmi"},{3,"Gouri"} };
		/*for (auto e : s) {
			e.display();
		}*/
		Student s1(1, "Arun");
		Student s2(2, "Sreelekshmi");
		vector<Student> emp;
		emp.push_back(s1);
		emp.push_back(s2);

		for (auto e : emp) {
			e.display();
		}
		cout << emp.capacity() << endl;
		cout << emp.size() << endl;

		emp.front().display();
		emp.back().display();
		emp.at(1).display();
		//emp.at(2).display(); //throw error 
		//emp[10].display(); //error
		emp.pop_back();
		emp.back().display();
	}
	catch (exception& e) {
		cout << "Error: " << e.what() << endl;
	}
	
	return 0;
}
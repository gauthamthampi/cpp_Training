#include <iostream>
using namespace std;

class Student {
private:
	int rollno;
	string name;

public:
	void display(string str) {
		cout << "Hello world, " << str << endl;
	}
	void setName(string str) {
		name = str;
	}
	string getName() {
		return name;
	}
	
};

int main() {
	Student s;
	s.setName("Gst");
	s.display("Gautham");
	cout << s.getName();
}
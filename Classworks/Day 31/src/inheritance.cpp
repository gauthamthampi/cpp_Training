#include <iostream>
using namespace std;

class A {
private:
	int a;
	void proprivMethod() {
		cout << "Private method of A got called!" << endl;
	}
protected:
	int b;
	void proMethod() {
		cout << "Protected method of A got called!" << endl;
	}
public:
	A() {
		cout << "A constructor got called." << endl;
		a = 10;
		b = 20;
	}
	void displayA() {
		cout << "Hello from A" << endl;
		cout << "Value of a: " << a << " and b: " << b << endl;
	}
};

class B : public A {
private:
	int a;
protected:
	int b;
public:
	B() {   //first base constructor will get called, then this will called
		cout << "B constructor got called." << endl;
		a = 25;
		b = 34;
	}
	void displayB() {
		cout << "Hello from B" << endl;
		cout << "Value of a: " << a << " and b: " << b << endl;
	}
	void protectB() {
		proMethod();
	}
};

int main() {
	A obja;
	B objb;
	obja.displayA();
	objb.displayB();
	objb.displayA();
	objb.protectB();
}


//to inherit a method from base class to child class it should be either protected or public
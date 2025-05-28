#include <iostream>
using namespace std;


class A {
protected:
	int a;
public:
	A(int x):a(x){ cout << "A const got called"; }
	~A(){ cout << "A dest got called"; }
	void displayA() {
		cout << "A is: " << a << endl;
	}
};  

class B : public A {
protected:
	int b;
public:
	B(int x,int y):A(x),b(y){ cout << "B const got called"; }
	~B() { cout << "B dest got called"; }
	void displayA() {
		cout << "A is: " << a << endl;
		cout << "B is: " << b << endl;
	}
};

class C : public B {
	int c;
public:
	C(int x,int y,int z):A(x),B(y),c(z){}
	void displayA() {
		cout << "A is: " << a << endl;
		cout << "B is: " << b << endl;
		cout << "C is: " << c << endl;
	}
};
#include <iostream>
using namespace std;

class Animal {   //abstract base class(should contain atleast one pure virtual)
public:
	virtual void eat() = 0; //pure virtual function
	virtual void drink() = 0;
	virtual void sleep() = 0;
};

class Cat : public Animal {
public:
	void eat();
	void drink();
	void sleep();
	//here all pure virtual functions in base class should be considered
};

int main() {
	Cat c;
	c.eat();
	c.drink();
	c.sleep();
}
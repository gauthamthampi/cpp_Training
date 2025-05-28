#include <iostream>
using namespace std;

class Animal {
public:
	void eat() { cout << "Eat"; }
	void walk() { cout << "Walk"; }
	void makeSound() { cout << "Make sound"; }
};

class Dog : public Animal {
public:
	void dispDog() { cout << "Dog"; }
	void soundLike() { cout << "Boww!"; }
};

class Cat : public Animal {
public:
	void dispCat() { cout << "Cat"; }
	void soundLike() { cout << "Meow!"; }
};

int main() {
	Dog d;
	d.dispDog();
	cout << " can ";
	d.walk();
	cout << "and can ";
	d.eat();
	cout << "and can ";
	d.makeSound();
	cout << " like ";
	d.soundLike();
}
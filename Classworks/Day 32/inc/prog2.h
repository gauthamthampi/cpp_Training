#pragma once
#include <iostream>
using namespace std;

class Animal {
public:
	void make_sound() { cout << "Animal makes sound!"; }
};

class Cat : public Animal {
public:
	void make_sound() { cout << "Cat meows"; }
};

class Dog : public Animal {
public:
	void make_sound() { cout << "Dog barks"; }
};


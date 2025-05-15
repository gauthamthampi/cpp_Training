#include <iostream>
using namespace std;

int main() {
	int* ptr = nullptr;
	int a = 10;

	cout << a << endl;
	cout << ptr << endl;
	cout << &a << endl;
	cout << &ptr << endl;

	ptr = &a;
	cout << ptr << endl; //same as &a value

	cout << *ptr << endl; //dereferencing

	*ptr = 20;
	cout << a << endl;
	cout << *ptr;
}
#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 20;
	int c = 30;

	int* ptr = &a;

	cout << *ptr << endl;

	*ptr = 101; //dereferencing

	cout << *ptr << endl;
	cout << a << endl; //changed due to derefer

	ptr = &b;
	cout << *ptr << endl;

	ptr = &c;
	cout << *ptr << endl;

	return 0;
}
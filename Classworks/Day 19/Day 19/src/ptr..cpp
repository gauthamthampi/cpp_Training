#include <iostream>
using namespace std;

int main() {
	int a = 10,b=50;
	char ch = 'A';
	float f = 10.5;

	int* ptr = nullptr;

	cout << "Address of a: " <<  &a << " and value is: " << a << endl;
	cout << "Address of ch: " << &ch << " and value is: " << ch << endl;
	cout << "Address of f: " <<  &f << " and value is: " << f << endl;

	a = 10;
	ptr = &a;

	cout << "Address of ptr: " << &ptr << " and value is " << ptr;
	printf("%u = %d", ptr, *ptr);

	ptr = &b;
	printf("\n%u is having a value stored as = %d\n", ptr, *ptr);

	*ptr = 101;

	//cout << "Address of ptr: " << &ptr << " and value is: " << ptr << endl;
}
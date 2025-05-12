#include <iostream>
using namespace std;

void swap1(int, int);  //call by value
void swap2(int*, int*); //call by pointer
void swap3(int&, int&); //catch by reference

void swap1(int a, int b) {
	int t;
	t = a;
	a = b;
	b = t;
	cout << "IN swap1 function\n" << a << "\t" << b << endl;
}

void swap2(int* a, int* b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
	cout << "IN swap2 function\n" << *a << "\t" << *b << endl;
}

void swap3(int& a, int& b) {
	int t;
	t = a;
	a = b;
	b = t;
	cout << "IN swap3 function\n" << a << "\t" << b << endl;
}

int main() {
	int a = 10, b = 20;
	cout << "In Main(before swap)\n" << a << "\t" << b << endl;
	//swap1(a,b);
	//swap2(&a, &b);
	swap3(a, b);
	cout << "In Main(after swap)\n" << a << "\t" << b << endl;
}
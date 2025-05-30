#include <iostream>
using namespace std;

template <class T>
void mySwap(T& a, T& b)
{
	T t = a;
	a = b;
	b = t;
}

int main() {
	int a = 10, b = 20;
	float x = 30.3, y = 55.5;

	mySwap(a,b);
	cout << "a : " << a << " and b : " << b << endl;

	mySwap(x, y);
	cout << "x : " << x << " and y : " << y << endl;
}
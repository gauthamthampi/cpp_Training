/*
Functions of different types: calling of functions
1) Call by value
2) Call by pointers
3) Call by reference
*/

#include <iostream>
using namespace std;

int add(int, int);

int main() {
	int a = 10, b = 20;
	int res = add(a, b);
	cout << res << endl;
	return 0;
}

int add(int v1, int v2) {
	return v1 + v2;
}

#include <iostream>
using namespace std;

int main() {
	int a[3] = { 1,2,3 };
	cout << a[0] << " " << a[1] << " " << a[2] << endl;
	int* ptr = nullptr;
	ptr = &a[0];
	cout << *ptr;
	ptr = a;
	
	ptr = ptr + 1;

	cout << *ptr;
	return 0;

}
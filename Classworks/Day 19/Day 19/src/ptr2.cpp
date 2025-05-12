#include <iostream>
using namespace std;

int main() {
	int a[3] = { 10,20,30 };
	cout << a[0] << "\t" << a[1] << "\t" << a[2] << endl;

	int* ptr = &a[0];
	
	cout << *ptr << endl;

	ptr = ptr+1; //ptr++
	cout << *ptr << endl;

	ptr = ptr+1; 
	cout << *ptr << endl;

	//ptr = ptr+1 --> will store garbage since size is 3

	return 0;
}


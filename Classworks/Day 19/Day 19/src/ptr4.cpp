#include <iostream>
using namespace std;

int main() {
	int a[3] = { 10,20,30 };

	int* ptr = a;

	cout << *ptr++ << endl; //-> on address
	cout << *++ptr << endl;
	cout << ++ * ptr << endl; // -> on content
	
	ptr = a;
	int prod = *ptr * *ptr;
	cout << prod;
	cout << sizeof(ptr) << " " << sizeof(void*) << endl;

	return 0;
}
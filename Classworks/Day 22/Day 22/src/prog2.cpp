//Sum of array using pointers and functions
#include <iostream>
using namespace std;

int sumOfArr(int *,int);

int sumOfArr(int* ptr, int size) {
	int sum = 0;
	//ptr converted to array notation
	for (int i = 0;i < size;i++) 
		sum += ptr[i];
	
	//direct ptr 
	for (int i = 0;i < size;i++) 
		sum += *ptr;
	
	return sum;
}

int main() {
	int list[] = { 1,2,3,4,5 };
	int size = sizeof(list) / sizeof(list[0]);
	cout << sumOfArr(&list[0], size) << endl;
	//cout << sumOfArr(list, size) << endl; --> another option

	return 0;
}
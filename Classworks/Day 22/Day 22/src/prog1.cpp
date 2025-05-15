//Find maximum of two numbers using pointers
#include <iostream>
using namespace std;
int findMax(int*, int*);
int findMax(int *x, int *y) {
	int retValue = 0;
	//logic to find max of 2 numbers and assign to retval
	if (*x < *y) 
		retValue = *y;
	
	else
		retValue = *x;

	return retValue;
	//return *x > *y ? *x : *y; --> another solution(optimal)
}

int main() {
	int n1 = 10, n2 = 20;
	cout << findMax(&n1, &n2);

}
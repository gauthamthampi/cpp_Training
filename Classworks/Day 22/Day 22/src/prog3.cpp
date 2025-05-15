//reverse an array using pointers
#include <iostream>
using namespace std;

int reverseArr(int*, int);
void dispArr(int*, int);

int reverseArr(int* ptr, int size){
	for (int i = 0;i < size/2;i++) {
		int temp = ptr[i];
		ptr[i] = ptr[size - 1 - i];
		ptr[size - 1 - i] = temp;
	}
	    
	return 0;
}

//alternate logic
/*
int reverseArr(int* ptr, int size){
	int t;
	int start = nullptr;
	int end = nullptr;

	start = ptr;
	end = ptr + (n - 1);

	while(start<end)
	  t = *start;
	  *start = *end;
	  *end = t;
	  start++;
	  end--;

	return 0;
}
*/

void dispArr(int* ptr, int size) {
	for (int i = 0;i < size;i++) {
		cout << ptr[i] << " ";
	}
}

int main() {
	int list[] = { 1,2,3,4,5,6 };
	int size = sizeof(list) / sizeof(list[0]);
	reverseArr(list, size);
	dispArr(list, size);
	return 0;
}
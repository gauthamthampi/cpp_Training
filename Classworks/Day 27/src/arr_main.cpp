#include <iostream> 
#include "array.h"
using namespace std;

int main() {
	const int size = 5;
	int* arr = new int[size];
	int* baseArr = arr;
	for (int i = 1;i < size;i++) {
		*arr = i;
		arr++;
	}
	Array a(size, baseArr);
	a.findBiggest(baseArr);
	a.sortAscending(baseArr);
	a.sortDescending(baseArr);
	delete[] baseArr;
	return 0;


}
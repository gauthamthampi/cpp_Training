#include <iostream>
#include "array.h";
using namespace std;

int Array::findBiggest(int* ptr) {
	
	int l1 = *ptr;
	for (int i = 0;i < s;i++,ptr++) {
		if (l1 < *ptr) {
			l1 = *ptr;
		}
	}

	biggest = l1;
	return biggest;
}

void Array::sortAscending(int* ptr){
	for (int i = 0;i < size;i++) {
		for (int j = 0;j < size;j++) {
			if (ptr[j] > ptr[j + 1]) {
				int temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
}

void Array::sortDescending(int* ptr) {
	for (int i = 0;i < size;i++) {
		for (int j = 0;j < size;j++) {
			if (ptr[j] < ptr[j + 1]) {
				int temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
}
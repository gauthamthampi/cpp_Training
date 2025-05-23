#pragma once
class Array {
private:
	int size;
	int* arr = new int[size];
	int biggest;

public:
	Array(int i, int array[]) {
		size = i;
		for (int i = 0;i < size;i++,arr++) {
			arr[i] = array[i];
		}
	}
	
	int findBiggest(int*);
	void sortAscending(int*);
	void sortDescending(int*);
};
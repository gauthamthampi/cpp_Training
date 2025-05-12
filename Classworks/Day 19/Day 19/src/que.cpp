//sort list in an asc order using pointers (store,sort and print)
#include <iostream>
using namespace std;


int* allocMem(int*, int);
int getValues(int*, int);
void sortAsc(int*, int);
void disp(int*, int);
void swap(int& , int&);

int main() {
	int* ptr = nullptr;
	int n = 5;
	ptr = allocMem(ptr, n);
	getValues(ptr, n);
	cout << "Before sort" << endl;
	disp(ptr, n);
	sortAsc(ptr, n);
	cout << "After sort" << endl;
	disp(ptr, n);
}

int* allocMem(int* p, int nEle) {
	p = (int*)malloc(nEle * sizeof(int));
	return p;
}

int getValues(int* p, int n) {
	for (int i = 0;i < n;i++, p++) {
		cin >> *p;
	}
	return 0;
}

void swap(int &a, int& b) {
	int t = a;
	a = b;
	b = t;
}

void sortAsc(int* p, int n) {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (p[i] > p[j]) {
				swap(p[i], p[j]);
			}
		}
	}
}

void disp(int* p, int n) {
	int i = 0;
	while (i < n) {
		cout << *p++ << "\t";
		i++;
	}
	cout << endl;
}


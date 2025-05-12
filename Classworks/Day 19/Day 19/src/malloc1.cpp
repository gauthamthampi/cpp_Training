#include <iostream>
using namespace std;

int main() {
	int* ptr = nullptr;
	int* temp = nullptr;
	int noofElem = 5;

	//allocate mem first and then use it
	ptr = (int*)malloc(sizeof(int) * noofElem);
	// copy BA to a temp pointer
	temp = ptr;

	for (int i = 0;i < noofElem;i++) {
		cout << "Enter the " << i + 1 << "value " << endl;
		cin >> *ptr++;
	}

	//printing with respect to pointer 
	ptr = temp;
	cout << "Pointer based" << endl;
	for (int i = 0;i < noofElem;i++) {
		cout << (i + 1) << " value = " << *ptr++ << endl;
	}

	//printing with respect to array
	ptr = temp;
	cout << "Array based" << endl;
	for (int i = 0;i < noofElem;i++) {
		cout << (i + 1) << " value = " << ptr[i] << endl;
	}

	return 0;
}
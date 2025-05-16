#include <iostream>
using namespace std;

int main() {
	int a[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 5;j++) {
			//cout << "Address = " << (unsigned long int)&a[i][j] << "\t value = " << a[i][j];
			//cout << endl;
		}
	}

	int* ptr = nullptr;
	ptr = &a[0][0];   //base address of two which are 2d and 1d are different
		ptr++;
		cout << *ptr << endl;
		ptr++;
		cout << *ptr << endl;
		ptr++;
		cout << *ptr << endl;
		ptr++;
		cout << *ptr << endl;


		return 0;
}

//Base address + index value*sizeof(data type) ==> value (1d array)
//Base address + (R+C*sizeof(dt)) (2d array)

//formula  -->  BA + rowIV*(colIV*sizeof(dt))+(colIV*sizeof(dt))
// row 1
//8568 + 0*(5*4)+0*4 => 8568 => 1
//8568 + 0*(5*4)+1*4 => 8572 => 2
//8568 + 0*(5*4)+2*4 => 8574 => 3

//row2
//8568 + 1*(5*4)+0*4 => 8588 => 1
//8568 + 1*(5*4)+1*4 => 8592 => 1
//8568 + 1*(5*4)+2*4 => 8596 => 1
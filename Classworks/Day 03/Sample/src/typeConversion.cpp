#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	float b = 5.5;
	int c = a + b;
	cout << "Value of c is" << c << endl;
}

void typeConvImp() {
	int x = 5;          // x = integer
	float y = 2.5;      // y = float
	float result = x + y;  // Implicit conversion of 'x' from int to float

	cout << "Result: " << result << endl;  // Output: 7.5
	return 0;
	
}

// int a / int b = int c, ie 10 / 3 gives 3 instead of 3.33 because int/int process - here we need 
// explicit conversion


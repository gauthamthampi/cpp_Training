#include <iostream>
using namespace std;

/*Example:
Input: 153
Output : Armstrong number
explanation :
(since(1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153))
*/

int main() {
	int num,sum=0,value;
	cout << "Enter the number: ";
	cin >> num;
	value = num;
   
	while (num > 0) {
		int digit = num % 10;
		sum += digit * digit * digit;
		num /= 10;
	}

	if (sum == value) {
		cout << "Armstrong Number" << value;
	}
	else {
		cout << "Not armstrong number" << value;
	}
	return 0;
	
}
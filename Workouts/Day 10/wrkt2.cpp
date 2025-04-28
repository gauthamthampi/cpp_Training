#include <iostream>
using namespace std;

//que 6 file
/*
1) - find the middle amoung 3

int findMiddle(int, int, int);
int main() {
	int n1, n2, n3;
	cout << "Enter the number1: " << endl;
	cin >> n1;
	cout << "Enter the number2: " << endl;
	cin >> n2;
	cout << "Enter the number3: " << endl;
	cin >> n3;

	cout << "The middle number is: " << findMiddle(n1, n2, n3);
	return 0;
}

int findMiddle(int n1, int n2, int n3) {
	if ((n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3)) {
		return n1;  // n1 is the middle
	}
	else if ((n2 > n1 && n2 < n3) || (n2 < n1 && n2 > n3)) {
		return n2;  // n2 is the middle
	}
	else {
		return n3;  // n3 is the middle
	}
}
*/

/*
2. Sum of Digits Until a Single Digit

int findSum(int);

int main() {
	int num;
	cout << "Enter number";
	cin >> num;

	int sum = findSum(num);
	cout << "The sum is: " << findSum(sum);
	return 0;
}

int findSum(int i) {
	if (i <= 0) {
		return 0;
	}

	int digit = i % 10;

	if (digit > 0) {
		return digit + findSum(i /= 10);
	}
}
*/

/*
3) find the given year is a leap year or not

int main() {
	int num;
	cout << "Enter number : ";
	cin >> num;

	if ((num % 4 == 0 && num % 100 != 0) || num / 400 == 0) {
		cout << "Yes, it is a leap year.";
	}else {
		cout << "No, not a leap year.";
	}
}

*/

/*
4) find the second largest digit
int main() {
	int num,l1=0,l2=0;
	cout << "Enter number: ";
	cin >> num;
	l1 = num % 10;

	while (num > 0) {
		int digit = num % 10;
		if (digit > l1) {
			l2 = l1;
			l1 = digit;
		}
		num /= 10;
	}
	cout << "The second largest is : " << l2;
}
*/
/*
 5) find minute and seconds
 int main() {
	int hour, min = 0, sec = 0;
	cout << "Enter hours: ";
	cin >> hour;

	min = hour * 60;
	sec = min * 60;

	cout << "Answer is " << min << " minutes and " << sec << " seconds.";
		return 0;
}
*/

/*
6) find the sum of 2 numbers is even
int main() {
	int n1, n2;
	cout << "Enter two numbers" << endl;
	cout << "Num1: ";
	cin >> n1;
	cout << "Num2: ";
	cin >> n2;
	int sum = n1 + n2;

	if (sum % 2 == 0) {
		cout << true;
	}
	else {
		cout << false;
	}
	return 0;
}
*/

/*
*7) form a new number with first digit and last digit
int formNewNumber(int firstNumber, int secondNumber) {
	int lastDigit = firstNumber % 10;

	while (secondNumber >= 10) {
		secondNumber /= 10;
	}
	int firstDigit = secondNumber;

	int newNumber = lastDigit * 10 + firstDigit;

	return newNumber;
}

int formNewNumber(int, int);

int main() {
	int firstNumber, secondNumber;
	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	int result = formNewNumber(firstNumber, secondNumber);
	cout << "The new number formed is: " << result << endl;

	return 0;
}

*/

/*
8) swap two numbers without third variable
void swapNumbers(int& a, int& b) { //Pass by reference
	a = a + b;
	b = a - b;
	a = a - b;
}

int main() {
	int x, y;

	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;

	cout << "Before swapping: x = " << x << ", y = " << y << endl;
	swapNumbers(x, y);
	cout << "After swapping: x = " << x << ", y = " << y << endl;

	return 0;
}

*/


/*
9) find power using only multiplication
int power(int a, int b) {
	if (b == 0) {
		return 1;
	}
	return a * power(a, b - 1);
}

int main() {
	int a, b;

	cout << "Enter base (a): ";
	cin >> a;
	cout << "Enter exponent (b): ";
	cin >> b;

	int result = power(a, b);

	cout << a << "^" << b << " = " << result << endl;

	return 0;
}
*/

/*
10) is triangle valid
bool isValidTriangle(int a, int b, int c) {
	return (a + b + c == 180) && (a > 0 && b > 0 && c > 0);
}

bool isValidTriangle(int, int, int);

int main() {
	int angle1, angle2, angle3;

	cout << "Enter three angles: ";
	cin >> angle1 >> angle2 >> angle3;

	if (isValidTriangle(angle1, angle2, angle3)) {
		cout << "Yes, these angles can form a valid triangle." << endl;
	}
	else {
		cout << "No, these angles cannot form a valid triangle." << endl;
	}
	return 0;
}
*/




#include <iostream>
using namespace std;
 
//que 5 file
//1)
int printNums(int);

int main() {
	int num;
	cout << "Enter number";
	cin >> num;

	printNums(num);
	return 0;

}
int printNums(int n) {
	if (n < 1) {
		return 1;
	}
	cout << n << " ";
	printNums(n - 1);
}



//2)
int calculateSum(int);

int main() {
	int num;
	cout << "Enter the number: ";
	cin >> num;

	int sum = calculateSum(num);
	cout << "The sum is: " << sum;
	return 0;
}

int calculateSum(int i) {
	int sum = 0;
	if (i <= 0) {
		return 1;
	}

	return i + calculateSum(i-1);
}

//3)
int fibonacci(int);
int main() {
	int num;
	cout << "Enter the number: ";
	cin >> num;



	cout << "Fibonacci on this position is : " << fibonacci(num);
	return 0;
}

int fibonacci(int i) {
	if (i <= 0) {
		return 1;
	}

	return fibonacci(i - 1) + fibonacci(i - 2);
}


//4)
int findZeros(int);

int main() {
	int num;
	cout << "Enter the number: ";
	cin >> num;

	int count = findZeros(num);
	cout << "Count is: " << count;
	return 0;
}

int findZeros(int i) {
	if (i <= 0) {
		return 0;
	}

	int lastdigit = i % 10;
	if (lastdigit ==  0) {
		return 1 + findZeros(i/10);
	}
	else {
		return findZeros(i / 10);
	}
}



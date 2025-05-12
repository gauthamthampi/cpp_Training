// 13) Write a Program to Find the Sum of the First N Natural Numbers

#include <iostream>
using namespace std;
int findSum(int);

int main() {
	int num;
	cin >> num;
	cout << "Sum is: " << findSum(num);
	return EXIT_SUCCESS;
}

int findSum(int num) {
	int sum = 0;
	while (num>0) {
		sum += num;
		num--;
	}
	return sum;
}
//2) Write a Program to Find the Greatest of the Three Numbers

#include <iostream>
using namespace std;
int checkNumber(int,int,int);

int main() {
	int n1,n2,n3;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cout << "Greatest number is: " << checkNumber(n1, n2, n3);
	return EXIT_SUCCESS;
}

int checkNumber(int n1, int n2, int n3) {
	int large;
	if (n1 > n2) {
		if (n1 > n3)
			large = n1;
		else
			large = n3;
	}
	else {
		if (n2 > n3)
			large = n2;
		else
			large = n3;
	}
	return large;
}
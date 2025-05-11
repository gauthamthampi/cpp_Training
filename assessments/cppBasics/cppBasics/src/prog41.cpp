//41) Write a Program to Print All Natural Numbers up to N Without Using a Semi-Colon

#include <iostream>
using namespace std;

int main() {
	static int n = 0;
	if (n == 10) {
		return 0;
	}
	cout << n++ << endl;
	main();
	return EXIT_SUCCESS;
}






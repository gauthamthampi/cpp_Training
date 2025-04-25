#include <iostream>;
using namespace std;

int recFunc(int i) {
	if (i <= 0) {
		return 1;
	}
	i--;
	recFunc(i);

	cout << i << endl;
}

//factorial
int factorial(int i) {
	if (i <= 1) return 1;
	return i * factorial(i-1);
}
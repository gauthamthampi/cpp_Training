#include <iostream>
using namespace std;

int main() {
	static int n = 1;
	if (n == 10) 
		exit(EXIT_SUCCESS);
	cout << n++ << endl;
	main();
	return 0;  //return EXIT_SUCCESS
}
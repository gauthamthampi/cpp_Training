//dangling pointer situiation (overcome by making the variable as static)
#include <iostream>
using namespace std;

int* func(int);

int main()
{
	int* ptr = NULL;
	ptr = func(10);
	cout << *ptr << endl;
	return 0;
}

int func(int a) {
	return 0;
}

//Dangling 
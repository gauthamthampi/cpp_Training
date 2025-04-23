#include <iostream>
#include "stringHand.h"
#include <cstdlib>  

using namespace std;
int main(int argc, char *argv[]) {   //c++ main can accept command line arguments, argc = no of arguments received
	//stringHandling();
	//enumHandling();
	/*
	cout << argc << endl;
	cout << argv[0] << endl; //it will be the file name of the exe file
	cout << argv[1] << endl;

	for (int i = 0;i < argc;i++)
		cout << "argv[" << i << "] : " << argv[i] << endl;

	int res = atoi(argv[1]) + atoi(argv[2]);
	cout << "res : " << res << endl;
	*/
	

	int num1 = atoi(argv[2]), num2 = atoi(argv[3]);
	char op = argv[1][0];

	switch (op) {
	case('+'):
		cout << "Answer: " << num1 + num2 << endl;
		break;
	case('-'):
		cout << "Answer: " << num1 - num2 << endl;
		break;
	case('*'):
		cout << "Answer: " << num1 * num2 << endl;
		break;
	case('/'):
		cout << "Answer: " << num1 / num2 << endl;
		break;
	default:
		cout << "Invalid operator." << endl;
	
	}
	return 0;
}

//argv = variable arguments, store value of all arguments
// we can set the arguments at settings -> debugging -> command arguments -> add
#include <iostream>


using namespace std;

void stringHandling() {
	
	char ch = 'A';
	char fName[20];
	string sName;

	cout << "ch value" << ch << endl;
	cout << "Enter first name : ";
	cin >> fName;
	cout << "Enter second name : ";
	cin >> sName;
	cout << "\nMy Name is " << fName << "\r" << sName << endl;
	//\r = carriage return where the variable go to the beginning of the same line and do overriding
	//\b = backspace
	char Name[] = "Hello";
	cout << sizeof(Name) << endl;
	cout << "String length is: " << strlen(Name) << endl;

	for (int i = 0; i <= strlen(Name); i++)
		printf("%c =%d\n", Name[i], Name[i]);
}
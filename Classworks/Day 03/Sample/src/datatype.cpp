#include <iostream>
using namespace std;

int main() {
	int _id = 0;

	int itr1 = 0, itr2 = 0;

	char first_name[100] = { '\0', }, second_name[100] = { '\0', };

	memset(first_name, '\0', sizeof(first_name));

	for (int itr2 = 0; itr2 < 10; itr2++)
		cout << itr2 << endl;

	cout << itr2 << endl;

	strcat(first_name, "gautham");
	cout << first_name << endl;
	register int i;

		for (int i = 0;i < 100;i++)
			cout << i << endl;

		bool flag = true;

			cout << flag << endl;
			flag = false;
			cout << flag << endl;



}
#include <iostream>
using namespace std;

enum genre {
	Action=1,
	Comedy,
	Thriller,
	Mystery,
	SciFi
};

int switchPractice() {
	//char language[20];
	//char type[20];
	int inputGenre;
	
	cout << "Enter the genre";
	cin >> inputGenre;
	switch (inputGenre)
	{
	case Action:
		cout << "Choosed Genre: " << Action << endl;
		break;
	case Comedy:
		cout << "Choosed Genre: " << Comedy << endl;
		break;
	case Thriller:
		cout << "Choosed Genre: " << Thriller << endl;
		break;
	case Mystery:
		cout << "Choosed Genre: " << Mystery << endl;
		break;
	case SciFi:
		cout << "Choosed Genre: " << SciFi << endl;
		break;
	default:
		cout << "No genre found!" << endl;
		break;
	}

	return 0;

}
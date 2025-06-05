#include <iostream>
#include <set>
#include <string>
using namespace std;


int main() {
	set<string>dictionary;
	int size;
	string word,query;
	cout << "Enter number of words to add in dictionary: ";
	cin >> size;
	for (int i = 0;i < size;i++) {
		cin >> word;
		dictionary.insert(word);
	}
	cout << "Enter the query: ";
	cin >> query;
	for (const auto& i : dictionary) {
		if (i.find(query) != string::npos)
			cout << i << endl;
	}
	return 0;
}
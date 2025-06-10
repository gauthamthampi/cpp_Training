#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {

	istream_iterator<int>inp(cin); //begin of input stream
	istream_iterator<int>endIt; //end of stream iterator

	vector<int> numbers = { inp,endIt };

	for (int n : numbers) {
		cout << n << " ";
	}
	return 0;
}
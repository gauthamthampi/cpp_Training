#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
	vector<int> numbers = { 1,2,3,4 };

	ostream_iterator<int> outIt(cout, "|");
	copy(numbers.begin(), numbers.end(), outIt);

	return 0;
}
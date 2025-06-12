#include <iostream>
#include <thread>
using namespace std;

typedef unsigned long long ull;

int amt = 0;

void addMoney(int val) {
	ull start = 0, end = 19000000000;
	cout << "amt add=" << amt << endl;
	amt += val;
}
void subMoney(int val) {
	cout << "amt sub=" << amt << endl;
	amt -= val;
}
int main() {

}
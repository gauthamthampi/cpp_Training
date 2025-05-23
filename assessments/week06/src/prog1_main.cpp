#include <iostream>
#include "prog1.h"
using namespace std;

int main() {
	Flight f1("AI203", 100);
	f1.bookSeats(30);
	f1.showAvailability();
	f1.bookSeats(80);
}
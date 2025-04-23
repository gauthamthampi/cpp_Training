#include <iostream>
using namespace std;

int storageFullAlert() {
    int currentCapacity;

    cout << "Enter current capacity (0 to 100): ";
    cin >> currentCapacity;

    if (currentCapacity == 100) {
        cout << "Storage is full" << endl;
        return 0;
    }

    cout << "Storage available" << endl;
}

//if(-1) => in such conditions, if block will get executed because if 0 comes -> false, else true.
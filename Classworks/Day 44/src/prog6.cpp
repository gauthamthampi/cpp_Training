/* Odd-Even Alternating Print Using Threads
Problem Statement:
Create two threads, one to print odd numbers and one to print even numbers from 1 to 20 in order:
1 2 3 4 ... 20

Constraints:

The odd thread prints 1, 3, 5...

The even thread prints 2, 4, 6...

The output must be strictly in sequence.

Objective: Practice coordination of threads based on numeric condition and alternating turns.
*/
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
#define max 20

mutex mtx;
int curr = 1;


void printOdd() {
    while (true) {
        mtx.lock();
        if (curr > max) {
            mtx.unlock();
            break;
        }
        if (curr % 2 == 1) {
            cout << curr << " ";
            ++curr;
        }
        mtx.unlock();
    }
}

void printEven() {
    while (true) {
        mtx.lock();
        if (curr > max) {
            mtx.unlock();
            break;
        }
        if (curr % 2 == 0) {
            cout << curr << " ";
            ++curr;
        }
        mtx.unlock();
    }
}

int main() {
    thread t1(printOdd);
    thread t2(printEven);

    t1.join();
    t2.join();

    cout << endl;
    return 0;
}


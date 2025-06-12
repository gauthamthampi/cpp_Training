/* Print "ABC" Using Three Threads
Problem Statement:
Create three threads to print "A", "B", and "C" respectively in strict sequence. The final output should be:
ABCABCABC... repeated 5 times.

Constraints:

Each thread should print only its assigned character.

Use synchronization to ensure ordering: A ? B ? C ? A ...

Objective: Understand how to use condition variables or semaphores to coordinate multiple threads cyclically.*/
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

std::mutex mtx;
int turn = 0;  
int repeat = 5;

void printChar(char ch, int myTurn) {
    int count = 0;
    while (count < repeat) {
        mtx.lock();
        if (turn == myTurn) {
            std::cout << ch;
            ++count;
            turn = (turn + 1) % 3;
        }
        mtx.unlock();
    }
}

int main() {
    thread t1(printChar, 'A', 0);
    thread t2(printChar, 'B', 1);
    thread t3(printChar, 'C', 2);

    t1.join();
    t2.join();
    t3.join();

    std::cout << std::endl;
    return 0;
}

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int current = 1;
int n = 30; 
mutex mtx;

void fizz() {
    while (true) {
        mtx.lock();
        if (current > n) {
            mtx.unlock();
            break;
        }
        if (current % 3 == 0 && current % 5 != 0) {
            cout << "Fizz ";
            ++current;
        }
        mtx.unlock();
    }
}

void buzz() {
    while (true) {
        mtx.lock();
        if (current > n) {
            mtx.unlock();
            break;
        }
        if (current % 5 == 0 && current % 3 != 0) {
            cout << "Buzz ";
            ++current;
        }
        mtx.unlock();
    }
}

void fizzbuzz() {
    while (true) {
        mtx.lock();
        if (current > n) {
            mtx.unlock();
            break;
        }
        if (current % 15 == 0) {
            cout << "FizzBuzz ";
            ++current;
        }
        mtx.unlock();
    }
}

void number() {
    while (true) {
        mtx.lock();
        if (current > n) {
            mtx.unlock();
            break;
        }
        if (current % 3 != 0 && current % 5 != 0) {
            cout << current << " ";
            ++current;
        }
        mtx.unlock();
    }
}

int main() {
    std::thread t1(fizz);
    std::thread t2(buzz);
    std::thread t3(fizzbuzz);
    std::thread t4(number);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    cout << std::endl;
    return 0;
}

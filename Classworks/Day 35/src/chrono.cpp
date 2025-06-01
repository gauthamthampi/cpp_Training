#include <iostream>
#include <ctime>
#include <chrono>

//int main() {
//    auto now = std::chrono::system_clock::now();
//    std::time_t timeNow = std::chrono::system_clock::to_time_t(now);
//
//    std::cout << "Current time: " << std::ctime(&timeNow);
//}

//execution time
int main() {
    auto start = std::chrono::high_resolution_clock::now();

   
    long sum = 0;
    for (long i = 0; i < 100000000; ++i) {
        sum += i;
    }

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << "Execution time: " << duration.count() << " ms\n";

    return 0;
}

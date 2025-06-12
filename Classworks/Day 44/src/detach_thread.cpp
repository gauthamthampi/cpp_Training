#include <iostream>
#include <thread>

void backgroundTask(int& x) {
    x += 10;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Background task done. " << x << std::endl;
}

int main() {
    int val = 5;
    std::thread t(backgroundTask,std::ref(val));
    t.detach(); // Main won't wait
    std::cout << "Main is not blocked.\n";
    std::cout << val << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5)); // Wait to see output
    std::cout << val << std::endl;
    return 0;
}

//if bg task time > main time, main exits first and bg task wont be able to 
//refer location to return
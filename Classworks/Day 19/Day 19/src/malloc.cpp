#include <iostream>
#include <cstdlib>

int main() {
    int* arr = (int*)malloc(10 * sizeof(int));

    if (arr == nullptr) {
        std::cout << "Memory allocation failed!" << std::endl;
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        arr[i] = i * 2;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    free(arr);

    return 0;
}


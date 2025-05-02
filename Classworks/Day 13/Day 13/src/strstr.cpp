#include <iostream>
#include <cstring>  // For strstr

int main() {
    const char* haystack = "Hello, world!";
    const char* needle = "world";

    // Find the first occurrence of 'needle' in 'haystack'
    const char* result = strstr(haystack, needle);

    if (result != nullptr) {
        std::cout << "Found substring at position: " << (result - haystack) << std::endl;
    }
    else {
        std::cout << "Substring not found" << std::endl;
    }

    return 0;
}

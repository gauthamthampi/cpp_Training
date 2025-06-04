#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string s = "helloworld";

    // Count 'l'
    int countL = std::count(s.begin(), s.end(), 'l');
    std::cout << "Count of 'l': " << countL << "\n";

    // Convert to uppercase
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    std::cout << "Uppercase: " << s << "\n";
}
#include <iostream>
using namespace std;

int main() {
    int x = 5;

    x += 3;  //  x + 3
    cout << "After x += 3: " << x << endl;

    x -= 2;  // x - 2
    cout << "After x -= 2: " << x << endl;

    x *= 4;  // x * 4
    cout << "After x *= 4: " << x << endl;

    x /= 3;  // x / 3
    cout << "After x /= 3: " << x << endl;

    x %= 5; // x % 5
    cout << "After x %= 5: " << x << endl;
    return 0;
}

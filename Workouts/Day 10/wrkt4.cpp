#include <iostream>
using namespace std;

//functionChallenges que
//1) endless tunnel puzzle
/*
void endlessTunnel(int n) {
    if (n <= 0) {
        return;
    }
    cout << n << " ";
    endlessTunnel(n / 2);
}

int main() {
    int energy;
    cout << "Enter the initial energy: ";
    cin >> energy;

    endlessTunnel(energy);

    return 0;
}
*/

//2) tower of oddity
/*
void towerOfOddity(int currentFloor, int n) {
    if (currentFloor > n) {
        return;
    }

    cout << currentFloor << " ";

    towerOfOddity(currentFloor + 2, n);
}

int main() {
    int n;
    cout << "Enter the highest floor number: ";
    cin >> n;

    towerOfOddity(1, n);

    return 0;
}
*/

//3) number mirror
/*
void numberMirror(int n) {
    if (n == 0) {
        return;
    }

    cout << n % 10 << " ";

    numberMirror(n / 10);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    numberMirror(num);

    return 0;
}
*/

//4) summoning the dragon
/*
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            continue;
        }

        cout << i << " ";
    }
    return 0;
}
*/

//5) stairway of square

int sumOfSquares(int n) {
    if (n == 0) {
        return 0;
    }

    return n * n + sumOfSquares(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The sum of squares up to " << n << " is: " << sumOfSquares(n) << endl;

    return 0;
}

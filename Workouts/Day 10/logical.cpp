#include <iostream>
using namespace std;

//logical que

//1) find smallest digit in given number

int findSmallestDigit(int);
int main() {
	int num;
	cout << "Enter the number: ";
	cin >> num;
	cout << "Smallest number is: " << findSmallestDigit(num);
	return 0;
}

int findSmallestDigit(int num) {
	int sml = num % 10;
	while (num > 0) {
		int digit = num % 10;
		if (sml > digit) {
			sml = digit;
		}
		num /= 10;
	}
	return sml;
}


//2) odd one counting

int findOddSum(int);
int main() {
	int num;
	cout << "Enter the number: ";
	cin >> num;
	cout << "Odd number sum is: " << findOddSum(num);
	return 0;
}

int findOddSum(int num) {
	int sum = 0;
	while (num > 0) {
		int digit = num % 10;
		if(digit % 2 != 0)
		sum += digit;
		num /= 10;
	}
	return sum;
}


//3) Broken clock

void printRingMinutes(int hour) {
	for (int minute = 1; minute <= 59; minute++) {
		if (hour % minute == 0) {
			cout << "Clock rings at minute: " << minute << endl;
		}
	}
}

void printRingMinutes(int);

int main() {
	int hour;

	cout << "Enter the hour (1-12): ";
	cin >> hour;

	if (hour < 1 || hour > 12) {
		cout << "Invalid hour. Please enter an hour between 1 and 12." << endl;
		return 1; 
	}
	printRingMinutes(hour);
	return 0;
}


//4) Secret message in binary

#include <bitset>

int countOnes(int num) {
	return bitset<32>(num).count();
}
int countOnes(int);
int main() {
	int number;

	cout << "Enter the secret code (integer): ";
	cin >> number;

	int onesCount = countOnes(number);
	cout << "Number of 1s in the binary representation: " << onesCount << endl;

	return 0;
}


//5) kings perfect army

bool isPerfectNumber(int num) {
	int sum = 0;

	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0) {
			sum += i;  
		}
	}
	return sum == num;
}
bool isPerfectNumber(int);
int main() {
	int number;

	cout << "Enter the army number: ";
	cin >> number;

	if (isPerfectNumber(number)) {
		cout << number << " is a perfect army number!" << endl;
	}
	else {
		cout << number << " is not a perfect army number." << endl;
	}

	return 0;
}


//6) spaceship countdown

int main() {
	int n;

	cout << "Enter the countdown start number: ";
	cin >> n;

	while (n > 0) {
		cout << n << " seconds\n";  
		n--;  
	}
	cout << "Launch!\n";
	return 0;
}


//7) valid if first non zero digit is even

bool isEvenFirstNonZeroDigit(int code) {
	while (code > 0) {
		int digit = code % 10;
		if (digit != 0) {
			return digit % 2 == 0;
		}
		code /= 10;
	}
	return false;
}
bool isEvenFirstNonZeroDigit(int);
int main() {
	int code;

	cout << "Enter the secret code: ";
	cin >> code;

	if (isEvenFirstNonZeroDigit(code)) {

		cout << "Valid code: The first non-zero digit is even." << endl;
	}
	else {
		cout << "Invalid code: The first non-zero digit is not even." << endl;
	}

	return 0;
}


//8) highest power of 2

int highestPowerOf2(int x) {
	if (x <= 0) {
		return 0;
	}

	int power = 1;
	while (power <= x) {
		power *= 2;
	}

	return power / 2;
}
int highestPowerOf2(int);
int main() {
	int energy;

	cout << "Enter the energy reading: ";
	cin >> energy;

	int result = highestPowerOf2(energy);
	cout << "The highest power of 2 is: " << result << endl;

	return 0;
}

//9)magic multiplying size

// check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int multiplyDigits(int num) {
    int product = 1;
    while (num > 0) {
        int digit = num % 10;
        product *= digit;
        num /= 10;
    }
    return product;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Validate input
    if (number < 0) {
        cout << "Negative numbers are not allowed.\n";
        return 0;
    }

    int product = multiplyDigits(number);

    cout << "Product of digits = " << product << endl;

    if (isPrime(product)) {
        cout << "Magic box opens!" << endl;
    } else {
        cout << "Magic box remains closed." << endl;
    }

    return 0;
}



//10)doubling machine

int calculateSum(int n) {
	return (pow(2, n + 1) - 1);
}
int calculateSum(int);
int main() {
	int n;

	cout << "Enter the number of presses: ";
	cin >> n;

	int result = calculateSum(n);
	cout << "The sum of all numbers seen after " << n << " presses is: " << result << endl;
	return 0;
}

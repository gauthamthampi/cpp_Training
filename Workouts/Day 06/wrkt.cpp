#include <iostream>
using namespace std;

// 1) Pattern: 0, 3, 8, 15, 24
void pattern1() {
    int n, i = 1;
    cout << "Enter number: ";
    cin >> n;

    while (i < n) {
        cout << (i * i) - 1 << ",";
        i++;
    }
    cout << (i * i) - 1 << endl;
}

// 2) 5x5 matrix with *
void pattern2() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= n * n; i++) {
        if (i % 5 != 0) {
            cout << i << "*";
        } else {
            cout << i << endl;
        }
    }
}

// 3) Sum of digits
void sumOfDigits() {
    int n, sum = 0;
    cout << "Enter the number: ";
    cin >> n;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << "Sum of digits is: " << sum << endl;
}

// 4) Powers of 2: 1,2,4,8,...
void powersOfTwo() {
    int num, value = 1;
    cout << "Enter number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (i == num) {
            cout << value;
        } else {
            cout << value << ",";
            value = value * 2;
        }
    }
    cout << endl;
}

// 5) Swap without third variable
void swapNumbers() {
    int a, b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Value of a is: " << a << endl;
    cout << "Value of b is: " << b << endl;
}

// 6) Gross salary calculation
void grossSalary() {
    int basic_salary, house_rent, dearness, gross_sal;
    cout << "Enter the basic salary: ";
    cin >> basic_salary;

    house_rent = 0.40 * basic_salary;
    dearness = 0.20 * basic_salary;
    gross_sal = basic_salary + house_rent + dearness;

    cout << "The gross salary will be: " << gross_sal << endl;
}

// 7) Cost price from selling price and profit
void costPrice() {
    int selling_price, profit, actual_price;
    cout << "Enter the selling price: ";
    cin >> selling_price;
    cout << "Enter the profit: ";
    cin >> profit;

    actual_price = selling_price - profit;
    cout << "The actual price of the product is: " << actual_price << endl;
}

// 8) Area of a circle
void areaOfCircle() {
    int radius;
    float area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = 3.14 * (radius * radius);
    cout << "Area of circle is: " << area << endl;
}

// 9) Aggregate and percentage marks
void studentMarks() {
    int sub1, sub2, sub3, sub4, sub5, aggregate, percentage;
    cout << "Enter mark for Subject 1: ";
    cin >> sub1;
    cout << "Enter mark for Subject 2: ";
    cin >> sub2;
    cout << "Enter mark for Subject 3: ";
    cin >> sub3;
    cout << "Enter mark for Subject 4: ";
    cin >> sub4;
    cout << "Enter mark for Subject 5: ";
    cin >> sub5;

    if (sub1 > 100 || sub2 > 100 || sub3 > 100 || sub4 > 100 || sub5 > 100) {
        cout << "Invalid input (Mark is above 100)" << endl;
        return;
    }

    aggregate = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (aggregate * 100) / 500;
    cout << "The aggregate mark of the student is: " << aggregate
         << " and the percentage scored is: " << percentage << "%" << endl;
}

// 10) Alphabet triangle
void alphabetTriangle() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Increasing alphabets
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }

        // Decreasing alphabets
        ch -= 2;
        for (int j = 1; j < i; j++) {
            cout << ch;
            ch--;
        }

        cout << endl;
    }
}

// 11) Rectangle star pattern
void rectanglePattern() {
    int n;
    cout << "Enter the input: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// 12) Right triangle star pattern
void rightTrianglePattern() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    // Ascending part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Descending part
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// 13) Inverted right triangle star pattern
void invertedRightTrianglePattern() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    // pattern1();
    // pattern2();
    // sumOfDigits();
    // powersOfTwo();
    // swapNumbers();
    // grossSalary();
    // costPrice();
    // areaOfCircle();
    // studentMarks();
    // alphabetTriangle();
    // rectanglePattern();
    // rightTrianglePattern();
    // invertedRightTrianglePattern();

    return 0;
}

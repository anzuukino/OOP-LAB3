#include <iostream>
#include "Phanso.h"

using namespace std;

int main() {
    Phanso a(1, 2);
    Phanso b(3, 4);

    cout << "Addition (1/2 + 3/4): " << a + b << endl;
    cout << "Subtraction (1/2 - 3/4): " << a - b << endl;
    cout << "Multiplication (1/2 * 3/4): " << a * b << endl;
    cout << "Division (1/2 / 3/4): " << a / b << endl;

    Phanso c(4, 5);
    Phanso d(4, 5);
    Phanso e(5, 5);

    cout << "Equality (4/5 == 4/5): " << (c == d) << endl;
    cout << "Inequality (4/5 != 5/5): " << (c != e) << endl;
    cout << "Greater than (5/5 > 4/5): " << (e > c) << endl;
    cout << "Less than (4/5 < 5/5): " << (c < e) << endl;
    cout << "Greater than or equal (4/5 >= 4/5): " << (c >= d) << endl;
    cout << "Less than or equal (4/5 <= 5/5): " << (c <= e) << endl;

    Phanso f;
    cout << "Enter a fraction (numerator/denominator): ";
    cin >> f;
    cout << "Your input fraction: " << f << endl;

    return 0;
}

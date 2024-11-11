#include <iostream>
#include "Sophuc.h"

using namespace std;

int main() {
    Sophuc s1;
    Sophuc s2(3, 4);
    Sophuc s3(5);

    Sophuc sum = s2 + s3;
    cout << s2 << " + " << s3 << " = " << sum << endl;

    Sophuc diff = s2 - s3;
    cout << s2 << " - " << s3 << " = " << diff << endl;

    Sophuc prod = s2 * s3;
    cout << s2 << " * " << s3 << " = " << prod << endl;

    Sophuc div = s2 / s3;
    cout << s2 << " / " << s3 << " = " << div << endl;

    bool ok1 = (s2 == s3);
    cout << s2 << " == " << s3 << ": " << (ok1 ? "True" : "False") << endl;

    bool ok2 = (s2 != s3);
    cout << s2 << " != " << s3 << ": " << (ok2 ? "True" : "False") << endl;

    Sophuc s4;
    cout << "Enter a complex number (real and imaginary parts): ";
    cin >> s4;
    cout << "You entered: " << s4 << endl;
    Sophuc s5;
    cout << "Enter a complex number (real and imaginary parts): ";
    cin >> s5;
    cout << "You entered: " << s5 << endl;

    Sophuc sum1 = s4 + s5;
    cout << s4 << " + " << s5 << " = " << sum1 << endl;

    Sophuc diff1 = s4 - s5;
    cout << s4 << " - " << s5 << " = " << diff1 << endl;

    Sophuc prod1 = s4 * s5;
    cout << s4 << " * " << s5 << " = " << prod1 << endl;

    Sophuc div1 = s4 / s5;
    cout << s4 << " / " << s5 << " = " << div1 << endl;

    bool ok11 = (s4 == s5);
    cout << s4 << " == " << s5 << ": " << (ok11 ? "True" : "False") << endl;

    bool ok22 = (s4 != s5);
    cout << s4 << " != " << s5 << ": " << (ok22 ? "True" : "False") << endl;


    return 0;
}

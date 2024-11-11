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

    return 0;
}

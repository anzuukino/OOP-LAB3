#include <iostream>
#include "thoigian.h"

using namespace std;

int main() {
    Thoigian t1;
    Thoigian t2(2, 30, 45);
    Thoigian t3(3675);

    cout << "t1: " << t1 << endl;
    cout << "t2: " << t2 << endl;
    cout << "t3: " << t3 << endl;

    Thoigian t4 = t2 + 3600;
    cout << "t2 + 3600 seconds: " << t4 << endl;

    Thoigian t5 = t2 - 1800;
    cout << "t2 - 1800 seconds: " << t5 << endl;

    cout << "t2 == t3: " << (t2 == t3 ? "True" : "False") << endl;
    cout << "t2 != t3: " << (t2 != t3 ? "True" : "False") << endl;
    cout << "t2 > t3: " << (t2 > t3 ? "True" : "False") << endl;
    cout << "t2 < t3: " << (t2 < t3 ? "True" : "False") << endl;

    ++t2;
    cout << "After incrementing t2: " << t2 << endl;

    t2--;
    cout << "After decrementing t2: " << t2 << endl;

    Thoigian t6;
    cin >> t6;
	cout << "t6: " << t6 << endl;
    Thoigian t7;
	cin >> t7;
	cout << "t7: " << t7 << endl;

	cout << "t6 + t7: " << t6 + t7 << endl;
	cout << "t6 - t7: " << t6 - t7 << endl;
	cout << "t6 == t7: " << (t6 == t7 ? "True" : "False") << endl;
	cout << "t6 != t7: " << (t6 != t7 ? "True" : "False") << endl;
	cout << "t6 > t7: " << (t6 > t7 ? "True" : "False") << endl;
	cout << "t6 < t7: " << (t6 < t7 ? "True" : "False") << endl;
	cout << "t6 >= t7: " << (t6 >= t7 ? "True" : "False") << endl;
	cout << "t6 <= t7: " << (t6 <= t7 ? "True" : "False") << endl;

    ++t6;
	cout << "After incrementing t6: " << t6 << endl;

	t6--;
	cout << "After decrementing t6: " << t6 << endl;

    return 0;
}

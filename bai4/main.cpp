#include "ngaythangnam.h"
#include <iostream>

using namespace std;

int main() {
    NgayThangNam a(1, 1, 2020);
    NgayThangNam b(1, 1, 2020);

    cout << ((a == b) ? "True" : "False") << endl;
    cout << ((a != b) ? "True" : "False") << endl;
    cout << ((a < b) ? "True" : "False") << endl;
    cout << ((a > b) ? "True" : "False") << endl;
    cout << ((a <= b) ? "True" : "False") << endl;
    cout << ((a >= b) ? "True" : "False") << endl;

    NgayThangNam c(15, 5, 2021);
    NgayThangNam d(1, 1, 2022);

    cout << ((c == d) ? "True" : "False") << endl;
    cout << ((c != d) ? "True" : "False") << endl;
    cout << ((c < d) ? "True" : "False") << endl;
    cout << ((c > d) ? "True" : "False") << endl;
    cout << ((c <= d) ? "True" : "False") << endl;
    cout << ((c >= d) ? "True" : "False") << endl;

    NgayThangNam e(31, 12, 2021);

    cout << "Original date: " << e << endl;
    ++e;
    cout << "After prefix increment (++e): " << e << endl;
    e--;
    cout << "After postfix decrement (e--): " << e << endl;

    NgayThangNam f(28, 2, 2020);

    NgayThangNam g = f + 1;
    cout << "Adding 1 day to 28/2/2020 (leap year): " << g << endl;
    g = g + 1;
    cout << "Adding another day to 29/2/2020: " << g << endl;

    NgayThangNam h(1, 3, 2020);

    NgayThangNam i = h - 1;
    cout << "Subtracting 1 day from 1/3/2020: " << i << endl;

    NgayThangNam j(10, 1, 2020);
    NgayThangNam k(1, 1, 2020);
    NgayThangNam diff = j - k;
    cout << "Difference between 10/1/2020 and 1/1/2020: " << diff.TinhNgay() << " days" << endl;

    NgayThangNam userDate;
    cout << "Enter a date (day, month, year): ";
    cin >> userDate;
    cout << "You entered: " << userDate << endl;
    NgayThangNam userDate2;
	cout << "Enter another date (day, month, year): ";
	cin >> userDate2;
	cout << "You entered: " << userDate2 << endl;
    if (userDate > userDate2) {
        cout << "Difference between the two dates: " << (userDate - userDate2).toDays() << " days" << endl;
	}
	else {
		cout << "Difference between the two dates: " << (userDate2 - userDate).toDays() << " days" << endl;
	}
	userDate++;
	cout << "After incrementing the first date: " << userDate << endl;
	userDate2--;
	cout << "After decrementing the second date: " << userDate2 << endl;

	cout << "Comparing the two dates:" << endl;
	cout << ((userDate == userDate2) ? "True" : "False") << endl;

    return 0;
}

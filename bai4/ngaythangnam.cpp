#include <iostream>
#include "ngaythangnam.h"

using namespace std;

/**
 * Class representing a date with day, month, and year attributes.
 */
NgayThangNam::NgayThangNam() {
    // Default constructor initializing the date to 1/1/1.
    iNgay = 1;
    iThang = 1;
    iNam = 1;
}

/**
 * Parameterized constructor to initialize the date with specific values.
 * @param ngay: Day of the date.
 * @param thang: Month of the date.
 * @param nam: Year of the date.
 */
NgayThangNam::NgayThangNam(int ngay, int thang, int nam) {
    iNgay = ngay;
    iThang = thang;
    iNam = nam;
}

/**
 * Checks if a given year is a leap year.
 * @param year: The year to check.
 * @return True if the year is a leap year, False otherwise.
 */
bool NgayThangNam::isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

/**
 * Returns the number of days in a given month for a given year.
 * @param month: The month (1-12).
 * @param year: The year.
 * @return Number of days in the specified month.
 */
int NgayThangNam::daysInMonth(int month, int year) {
    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return days_in_month[month - 1];
}

/**
 * Verifies if the given day, month, and year represent a valid date.
 * @param day: The day to verify.
 * @param month: The month to verify.
 * @param year: The year to verify.
 * @return True if the date is valid, False otherwise.
 */
bool NgayThangNam::verify_data(int day, int month, int year) {
    if (month >= 1 && month <= 12 && day <= daysInMonth(month, year) && day >= 1) {
        return 1;
    }
    return 0;
}

/**
 * Calculates the day of the year for the current date.
 * @return The day of the year as an integer.
 */
int NgayThangNam::TinhNgay() {
    int total_days = 0;
    for (int i = 1; i < iThang; i++) {
        total_days += daysInMonth(i, iNam);
    }
    total_days += iNgay;
    return total_days;
}

/**
 * Adds a specified number of days to the current date.
 * @param ngay: Number of days to add.
 * @return A new NgayThangNam object with the updated date.
 */
NgayThangNam NgayThangNam::operator+(int ngay) {
    NgayThangNam kq = *this;
    kq.iNgay += ngay;
    while (kq.iNgay > daysInMonth(kq.iThang, kq.iNam)) {
        kq.iNgay -= daysInMonth(kq.iThang, kq.iNam);
        kq.iThang++;
        if (kq.iThang > 12) {
            kq.iThang = 1;
            kq.iNam++;
        }
    }
    return kq;
}

/**
 * Subtracts a specified number of days from the current date.
 * @param ngay: Number of days to subtract.
 * @return A new NgayThangNam object with the updated date.
 */
NgayThangNam NgayThangNam::operator-(int ngay) {
    NgayThangNam kq = *this;
    if (kq.toDays() < ngay) {
        cout << "Cant calculate, return default value" << endl;
        return kq;
    }
    kq.iNgay -= ngay;
    while (kq.iNgay < 1) {
        kq.iThang--;
        if (kq.iThang < 1) {
            kq.iThang = 12;
            kq.iNam--;
        }
        kq.iNgay += daysInMonth(kq.iThang, kq.iNam);
    }
    return kq;
}

/**
 * Converts the date to the number of days since the beginning of the calendar.
 * @return The date as an integer representing the number of days.
 */

int NgayThangNam::toDays() {
    int total_days = 0;

    for (int year = 1; year < iNam; year++) {
        total_days += isLeapYear(year) ? 366 : 365;
    }

    for (int month = 1; month < iThang; month++) {
        total_days += daysInMonth(month, iNam);
    }

    total_days += iNgay;

    return total_days;
}

/**
 * Calculates the difference in days between two dates.
 * @param a: The date to subtract from the current date.
 * @return A new NgayThangNam object with the updated date.
 */
NgayThangNam NgayThangNam::operator-(NgayThangNam a) {
    int total_days = a.toDays();
    NgayThangNam kq = *this;
    kq = kq - total_days;
    return kq;
}

/**
 * Prefix increment operator. Advances the date by one day.
 * @return Updated NgayThangNam object.
 */
NgayThangNam& NgayThangNam::operator++() {
    *this = *this + 1;
    return *this;
}

/**
 * Postfix increment operator. Advances the date by one day.
 * @return NgayThangNam object with the date before increment.
 */
NgayThangNam NgayThangNam::operator++(int) {
    NgayThangNam kq = *this;
    *this = *this + 1;
    return kq;
}

/**
 * Prefix decrement operator. Moves the date back by one day.
 * @return Updated NgayThangNam object.
 */
NgayThangNam& NgayThangNam::operator--() {
    *this = *this - 1;
    return *this;
}

/**
 * Postfix decrement operator. Moves the date back by one day.
 * @return NgayThangNam object with the date before decrement.
 */
NgayThangNam NgayThangNam::operator--(int) {
    NgayThangNam kq = *this;
    *this = *this - 1;
    return kq;
}

/**
 * Equality operator to compare two dates.
 * @param lhs: Left-hand side date.
 * @param rhs: Right-hand side date.
 * @return True if dates are equal, False otherwise.
 */
bool operator==(const NgayThangNam& lhs, const NgayThangNam& rhs) {
    return lhs.iNgay == rhs.iNgay && lhs.iThang == rhs.iThang && lhs.iNam == rhs.iNam;
}

/**
 * Inequality operator to compare two dates.
 * @param lhs: Left-hand side date.
 * @param rhs: Right-hand side date.
 * @return True if dates are not equal, False otherwise.
 */
bool operator!=(const NgayThangNam& lhs, const NgayThangNam& rhs) {
    return !(lhs == rhs);
}

/**
 * Less-than operator to compare two dates.
 * @param lhs: Left-hand side date.
 * @param rhs: Right-hand side date.
 * @return True if lhs is earlier than rhs, False otherwise.
 */
bool operator<(const NgayThangNam& lhs, const NgayThangNam& rhs) {
    if (lhs.iNam != rhs.iNam) {
        return lhs.iNam < rhs.iNam;
    }
    if (lhs.iThang != rhs.iThang) {
        return lhs.iThang < rhs.iThang;
    }
    return lhs.iNgay < rhs.iNgay;
}

/**
 * Greater-than operator to compare two dates.
 * @param lhs: Left-hand side date.
 * @param rhs: Right-hand side date.
 * @return True if lhs is later than rhs, False otherwise.
 */
bool operator>(const NgayThangNam& lhs, const NgayThangNam& rhs) {
    return !(lhs < rhs) && !(lhs == rhs);
}

/**
 * Less-than or equal-to operator to compare two dates.
 * @param lhs: Left-hand side date.
 * @param rhs: Right-hand side date.
 * @return True if lhs is earlier or equal to rhs, False otherwise.
 */
bool operator<=(const NgayThangNam& lhs, const NgayThangNam& rhs) {
    return lhs < rhs || lhs == rhs;
}

/**
 * Greater-than or equal-to operator to compare two dates.
 * @param lhs: Left-hand side date.
 * @param rhs: Right-hand side date.
 * @return True if lhs is later or equal to rhs, False otherwise.
 */
bool operator>=(const NgayThangNam& lhs, const NgayThangNam& rhs) {
    return lhs > rhs || lhs == rhs;
}

/**
 * Input stream operator to take date input.
 * Ensures the inputted date is valid.
 * @param is: Input stream object.
 * @param a: NgayThangNam object to store input.
 * @return The input stream object.
 */
istream& operator>>(istream& is, NgayThangNam& a) {
    int ok = 0;
    do {
        is >> a.iNgay;
        is >> a.iThang;
        is >> a.iNam;
		ok = a.verify_data(a.iNgay, a.iThang, a.iNam);
        if (!ok) {
            cout << "Ngay thang nam khong hop le, nhap lai" << endl;
        }
    } while (!ok);
    return is;
}

/**
 * Output stream operator to display the date in "dd/mm/yyyy" format.
 * @param os: Output stream object.
 * @param a: NgayThangNam object containing the date.
 * @return The output stream object.
 */
ostream& operator<<(ostream& os, const NgayThangNam& a) {
    os << a.iNgay << "/" << a.iThang << "/" << a.iNam;
    return os;
}

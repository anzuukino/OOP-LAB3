#pragma once
#include <iostream>

class NgayThangNam {
private:
	int iNgay, iThang, iNam;
public:

	NgayThangNam();
	NgayThangNam(int ngay, int thang, int nam);
	int TinhNgay();

	bool isLeapYear(int year);
	int daysInMonth(int month, int year);
	bool verify_data(int day, int month, int year);

	NgayThangNam operator+(int ngay);
	NgayThangNam operator-(int ngay);
	NgayThangNam operator-(NgayThangNam a);

	NgayThangNam& operator++();
	NgayThangNam operator++(int);
	NgayThangNam& operator--();
	NgayThangNam operator--(int);

	friend bool operator==(const NgayThangNam &lhs,const NgayThangNam &rhs);
	friend bool operator!=(const NgayThangNam& lhs, const NgayThangNam& rhs);
	friend bool operator<(const NgayThangNam& lhs, const NgayThangNam& rhs);
	friend bool operator>(const NgayThangNam& lhs, const NgayThangNam& rhs);
	friend bool operator<=(const NgayThangNam& lhs, const NgayThangNam& rhs);
	friend bool operator>=(const NgayThangNam& lhs, const NgayThangNam& rhs);
	

	friend std::istream& operator>>(std::istream& is, NgayThangNam& a);
	friend std::ostream& operator<<(std::ostream& os, NgayThangNam& a);
};
#pragma once
#include <iostream>
using namespace std;

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
	int toDays();

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
	

	friend istream& operator>>(istream& is, NgayThangNam& a);
	friend ostream& operator<<(ostream& os, const NgayThangNam& a);
};
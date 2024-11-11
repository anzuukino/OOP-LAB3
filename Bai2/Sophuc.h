#pragma once
#include <iostream>

using namespace std;

class Sophuc {
private:
	double dThuc, dAo;
public:
	Sophuc();
	Sophuc(int thuc, int ao);
	Sophuc(int thuc);

	friend Sophuc operator+(const Sophuc& lhs,const Sophuc& rhs);
	friend Sophuc operator-(const Sophuc& lhs, const Sophuc& rhs);
	friend Sophuc operator*(const Sophuc& lhs, const Sophuc& rhs);
	friend Sophuc operator/(const Sophuc& lhs, const Sophuc& rhs);

	friend bool operator==(const Sophuc& lhs, const Sophuc& rhs);
	friend bool operator!=(const Sophuc& lhs, const Sophuc& rhs);

	friend ostream& operator<<(ostream& os, const Sophuc& sp);
	friend istream& operator>>(istream& is, Sophuc& sp);
};

#pragma once
#include <iostream>

using namespace std;

class Thoigian {
private:
	int iGio;
	int iPhut;
	int iGiay;
public:
	Thoigian();
	Thoigian(int iGio, int iPhut, int iGiay);
	Thoigian(int iGiay);

	int TinhGiay() const;
	void TinhLaiGio(int iGiay);


	Thoigian operator+(int iGiay);
	Thoigian operator-(int iGiay);
	Thoigian operator+(const Thoigian& t);
	Thoigian operator-(const Thoigian& t);

	Thoigian& operator++();
	Thoigian operator++(int);
	Thoigian& operator--();
	Thoigian operator--(int);

	
	friend bool operator==(const Thoigian& lhs, const Thoigian& rhs);
	friend bool operator!=(const Thoigian& lhs, const Thoigian& rhs);
	friend bool operator>(const Thoigian& lhs, const Thoigian& rhs);
	friend bool operator<(const Thoigian& lhs, const Thoigian& rhs);
	friend bool operator>=(const Thoigian& lhs, const Thoigian& rhs);
	friend bool operator<=(const Thoigian& lhs, const Thoigian& rhs);

	friend ostream& operator<<(ostream& os, const Thoigian& dt);
	friend istream& operator>>(istream& is, Thoigian& dt);

};

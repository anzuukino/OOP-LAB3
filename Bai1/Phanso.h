#pragma once
#include <iostream>

using namespace std;

class Phanso {
private:
	int iTu;
	int iMau;
public:
	
	Phanso();
	Phanso(int iTu, int iMau);
	Phanso(int iTu);

    friend Phanso operator+(const Phanso& lhs, const Phanso& rhs);
    friend Phanso operator-(const Phanso& lhs, const Phanso& rhs);
    friend Phanso operator*(const Phanso& lhs, const Phanso& rhs);
    friend Phanso operator/(const Phanso& lhs, const Phanso& rhs);

    friend bool operator>(const Phanso& lhs, const Phanso& rhs);
    friend bool operator<(const Phanso& lhs, const Phanso& rhs);
    friend bool operator>=(const Phanso& lhs, const Phanso& rhs);
    friend bool operator<=(const Phanso& lhs, const Phanso& rhs);
    friend bool operator==(const Phanso& lhs, const Phanso& rhs);
    friend bool operator!=(const Phanso& lhs, const Phanso& rhs);

	friend istream& operator>>(istream& is, Phanso& ps);
	friend ostream& operator<<(ostream& os,const Phanso& ps);

    void Rutgon();
};

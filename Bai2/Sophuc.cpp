#include "Sophuc.h"

using namespace std;


/*
* Constructor
* Initialize the real and imaginary parts of the complex number to 0
* @param: none
*/

Sophuc::Sophuc() {
	dThuc = 0;
	dAo = 0;
}

/*
* Constructor
* Initialize the real and imaginary parts of the complex number to the given values
* @param: thuc - the real part of the complex number
* @param: ao - the imaginary part of the complex number
*/

Sophuc::Sophuc(int thuc, int ao) {
	dThuc = thuc;
	dAo = ao;
}

/*
* Constructor
* Initialize the real part of the complex number to the given value
* @param: thuc - the real part of the complex number
*/

Sophuc::Sophuc(int thuc) {
	dThuc = thuc;
	dAo = 0;
}


/*
* Overloaded operator +
* Add two complex numbers
* @param: lhs - the first complex number
* @param: rhs - the second complex number
* @return: the sum of the two complex numbers
*/

Sophuc operator+(const Sophuc& lhs, const Sophuc& rhs) {
	Sophuc sp;
	sp.dThuc = lhs.dThuc + rhs.dThuc;
	sp.dAo = lhs.dAo + rhs.dAo;
	return sp;
}

/*
* Overloaded operator -
* Subtract two complex numbers
* @param: lhs - the first complex number
* @param: rhs - the second complex number
* @return: the difference of the two complex numbers
*/

Sophuc operator-(const Sophuc& lhs, const Sophuc& rhs) {
	Sophuc sp;
	sp.dThuc = lhs.dThuc - rhs.dThuc;
	sp.dAo = lhs.dAo - rhs.dAo;
	return sp;
}

/*
* Overloaded operator *
* Multiply two complex numbers
* @param: lhs - the first complex number
* @param: rhs - the second complex number
* @return: the product of the two complex numbers
*/

Sophuc operator*(const Sophuc& lhs, const Sophuc& rhs) {
	Sophuc sp;
	sp.dThuc = lhs.dThuc * rhs.dThuc - lhs.dAo * rhs.dAo;
	sp.dAo = lhs.dThuc * rhs.dAo + lhs.dAo * rhs.dThuc;
	return sp;
}

/*
* Overloaded operator /
* Divide two complex numbers
* @param: lhs - the first complex number
* @param: rhs - the second complex number
* @return: the quotient of the two complex numbers
*/

Sophuc operator/(const Sophuc& lhs, const Sophuc& rhs) {
	Sophuc sp;
	sp.dThuc = (lhs.dThuc * rhs.dThuc + lhs.dAo * rhs.dAo) / (rhs.dThuc * rhs.dThuc + rhs.dAo * rhs.dAo);
	sp.dAo = (lhs.dAo * rhs.dThuc - lhs.dThuc * rhs.dAo) / (rhs.dThuc * rhs.dThuc + rhs.dAo * rhs.dAo);
	return sp;
}

/*
* Overloaded operator <<
* Print the complex number
* @param: os - the output stream
* @param: sp - the complex number
* @return: the output stream
*/

ostream& operator<<(ostream& os, const Sophuc& sp) {
	if (sp.dAo == 0) {
		os << sp.dThuc;
	}
	else if (sp.dThuc == 0) {
		os << sp.dAo << "i";
	}
	else {
		os << sp.dThuc << " + " << sp.dAo << "i";
	}
	return os;
}

/*
* Overloaded operator >>
* Read the complex number
* @param: is - the input stream
* @param: sp - the complex number
* @return: the input stream
*/

istream& operator>>(istream& is, Sophuc& sp) {
	is >> sp.dThuc;
	is >> sp.dAo;
	return is;
}

/*
* Overloaded operator ==
* Compare two complex numbers
* @param: lhs - the first complex number
* @param: rhs - the second complex number
* @return: true if the two complex numbers are equal, false otherwise
*/

bool operator==(const Sophuc& lhs, const Sophuc& rhs) {
	return lhs.dThuc == rhs.dThuc && lhs.dAo == rhs.dAo;
}

/*
* Overloaded operator !=
* Compare two complex numbers
* @param: lhs - the first complex number
* @param: rhs - the second complex number
* @return: true if the two complex numbers are not equal, false otherwise
*/

bool operator!=(const Sophuc& lhs, const Sophuc& rhs) {
	return lhs.dThuc != rhs.dThuc || lhs.dAo != rhs.dAo;
}	
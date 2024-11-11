#include <iostream>
#include <numeric>
#include <math.h>

#include "Phanso.h"

using namespace std;

/*
 * Default constructor for the Phanso (fraction) class.
 * Initializes the fraction with the numerator (iTu) set to 0
 * and the denominator (iMau) set to 1. This represents the fraction 0/1.
 * 
 * @return void
 */

Phanso::Phanso() {
    iTu = 0;
    iMau = 1;
}

/*
 * Constructor for the Phanso (fraction) class.
 * Initializes the fraction with the numerator (iTu) set to the value of the first parameter
 * and the denominator (iMau) set to the value of the second parameter.
 *
 * @param int iTu The numerator of the fraction
 * @param int iMau The denominator of the fraction
 * @return void
 */

Phanso::Phanso(int iTu, int iMau) {
    this->iTu = iTu;
    this->iMau = iMau;
	Rutgon();
}

/*
 * Constructor for the Phanso (fraction) class.
 * Initializes the fraction with the numerator (iTu) set to the value of the first parameter
 * and the denominator (iMau) set to 1.
 *
 * @param int iTu The numerator of the fraction
 * @return void
 */

Phanso::Phanso(int iTu) {
    this->iTu = iTu;
    this->iMau = 1;
}
/*
 * Simplifies the fraction by dividing both the numerator (iTu)
 * and denominator (iMau) by their greatest common divisor (GCD).
 * The fraction is reduced to its simplest form.
 * 
 * @return void
 */

void Phanso::Rutgon() {
    int a = this->iTu;
    int b = this->iMau;
    int UCLN = gcd(a, b);
	this->iTu = a / UCLN;
	this->iMau = b / UCLN;
}

/*
 * Overloads the addition operator (+) to add two fractions together.
 *
 * @param const Phanso& lhs The left-hand side fraction
 * @param const Phanso& rhs The right-hand side fraction
 * @return Phanso The sum of the two fractions
 */

Phanso operator+(const Phanso& lhs, const Phanso& rhs) {
    int iTu = lhs.iTu * rhs.iMau + rhs.iTu * lhs.iMau;
    int iMau = lhs.iMau * rhs.iMau;
    Phanso result(iTu, iMau);
    result.Rutgon();
    return result;
}

/*
 * Overloads the subtraction operator (-) to subtract one fraction from another.
 *
 * @param const Phanso& lhs The left-hand side fraction
 * @param const Phanso& rhs The right-hand side fraction
 * @return Phanso The difference of the two fractions
 */

Phanso operator-(const Phanso& lhs, const Phanso& rhs) {
	int iTu = lhs.iTu * rhs.iMau - rhs.iTu * lhs.iMau;
	int iMau = lhs.iMau * rhs.iMau;
	Phanso result(iTu, iMau);
	result.Rutgon();
	return result;
}

/*
 * Overloads the multiplication operator (*) to multiply two fractions together.
 *
 * @param const Phanso& lhs The left-hand side fraction
 * @param const Phanso& rhs The right-hand side fraction
 * @return Phanso The product of the two fractions
 */

Phanso operator*(const Phanso& lhs, const Phanso& rhs) {
	int iTu = lhs.iTu * rhs.iTu;
	int iMau = lhs.iMau * rhs.iMau;
	Phanso result(iTu, iMau);
	result.Rutgon();
	return result;
}

/*
 * Overloads the division operator (/) to divide one fraction by another.
 *
 * @param const Phanso& lhs The left-hand side fraction
 * @param const Phanso& rhs The right-hand side fraction
 * @return Phanso The quotient of the two fractions
 */

Phanso operator/(const Phanso& lhs, const Phanso& rhs) {
	int iTu = lhs.iTu * rhs.iMau;
	int iMau = lhs.iMau * rhs.iTu;
	Phanso result(iTu, iMau);
	result.Rutgon();
	return result;
}

/*
 * Overloads the greater than operator (>) to compare two fractions.
 *
 * @param const Phanso& lhs The left-hand side fraction
 * @param const Phanso& rhs The right-hand side fraction
 * @return bool True if the left-hand side fraction is greater than the right-hand side fraction, false otherwise
 */

bool operator>(const Phanso& lhs, const Phanso& rhs) {
	return (lhs.iTu * rhs.iMau) > (rhs.iTu * lhs.iMau);
}

/*
 * Overloads the less than operator (<) to compare two fractions.
 *
 * @param const Phanso& lhs The left-hand side fraction
 * @param const Phanso& rhs The right-hand side fraction
 * @return bool True if the left-hand side fraction is less than the right-hand side fraction, false otherwise
 */

bool operator<(const Phanso& lhs, const Phanso& rhs) {
	return (lhs.iTu * rhs.iMau) < (rhs.iTu * lhs.iMau);
}

/*
 * Overloads the greater than or equal to operator (>=) to compare two fractions.
 *
 * @param const Phanso& lhs The left-hand side fraction
 * @param const Phanso& rhs The right-hand side fraction
 * @return bool True if the left-hand side fraction is greater than or equal to the right-hand side fraction, false otherwise
 */

bool operator>=(const Phanso& lhs, const Phanso& rhs) {
	return (lhs.iTu * rhs.iMau) >= (rhs.iTu * lhs.iMau);
}

/*
 * Overloads the less than or equal to operator (<=) to compare two fractions.
 *
 * @param const Phanso& lhs The left-hand side fraction
 * @param const Phanso& rhs The right-hand side fraction
 * @return bool True if the left-hand side fraction is less than or equal to the right-hand side fraction, false otherwise
 */

bool operator<=(const Phanso& lhs, const Phanso& rhs) {
	return (lhs.iTu * rhs.iMau) <= (rhs.iTu * lhs.iMau);
}

/*
 * Overloads the equality operator (==) to compare two fractions.
 *
 * @param const Phanso& lhs The left-hand side fraction
 * @param const Phanso& rhs The right-hand side fraction
 * @return bool True if the two fractions are equal, false otherwise
 */

bool operator==(const Phanso& lhs, const Phanso& rhs) {
	return (lhs.iTu * rhs.iMau) == (rhs.iTu * lhs.iMau);
}

/*
 * Overloads the inequality operator (!=) to compare two fractions.
 *
 * @param const Phanso& lhs The left-hand side fraction
 * @param const Phanso& rhs The right-hand side fraction
 * @return bool True if the two fractions are not equal, false otherwise
 */

bool operator!=(const Phanso& lhs, const Phanso& rhs) {
	return (lhs.iTu * rhs.iMau) != (rhs.iTu * lhs.iMau);
}

/*
 * Overloads the input stream operator (>>) to read a fraction from the input stream.
 *
 * @param istream& is The input stream
 * @param Phanso& ps The fraction to read
 * @return istream The input stream
 */

istream& operator>>(istream& is, Phanso& ps) {
	is >> ps.iTu;
	is >> ps.iMau;
	return is;
}

/*
 * Overloads the output stream operator (<<) to write a fraction to the output stream.
 *
 * @param ostream& os The output stream
 * @param Phanso ps The fraction to write
 * @return ostream The output stream
 */

ostream& operator<<(ostream& os, Phanso ps) {
	os << ps.iTu << "/" << ps.iMau;
	return os;
}




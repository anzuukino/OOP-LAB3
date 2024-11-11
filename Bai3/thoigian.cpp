#include "thoigian.h"

using namespace std;

/**
 * @class Thoigian
 * @brief Class representing time with hours, minutes, and seconds.
 *
 * This class provides methods to manipulate and perform arithmetic operations on time objects, such as adding, subtracting, and comparing time.
 */

 /**
  * @brief Default constructor that initializes time to 0 hours, 0 minutes, and 0 seconds.
  *
  * @param void
  * @return void
  */
Thoigian::Thoigian() {
    iGio = 0;
    iPhut = 0;
    iGiay = 0;
}

/**
 * @brief Constructor that initializes time with specified hours, minutes, and seconds.
 *
 * @param iGio Hours to set.
 * @param iPhut Minutes to set.
 * @param iGiay Seconds to set.
 * @return void
 */
Thoigian::Thoigian(int iGio, int iPhut, int iGiay) {
    this->iGio = iGio;
    this->iPhut = iPhut;
    this->iGiay = iGiay;
}

/**
 * @brief Constructor that initializes time using a given number of seconds.
 *
 * @param iGiay Seconds to set the time from.
 * @return void
 */
Thoigian::Thoigian(int iGiay) {
	TinhLaiGio(iGiay);
}

/**
 * @brief Converts the time object to a total number of seconds.
 *
 * This method calculates the total number of seconds represented by the time object, based on its hours, minutes, and seconds.
 *
 * @return Total number of seconds as an integer.
 */
int Thoigian::TinhGiay() const {
    return iGio * 3600 + iPhut * 60 + iGiay;
}

/**
 * @brief Calculates the time (hours, minutes, seconds) from the given total number of seconds.
 *
 * This method updates the time object (hours, minutes, seconds) based on the given total number of seconds.
 *
 * @param Giay Total number of seconds.
 * @return void
 */
void Thoigian::TinhLaiGio(int Giay) {
    iGio = Giay / 3600;
    iPhut = (Giay - iGio * 3600) / 60;
    iGiay = Giay - iGio * 3600 - iPhut * 60;
}

/**
 * @brief Adds a specified number of seconds to the time object and returns the updated object.
 *
 * This operator adds the specified number of seconds to the time object and returns the updated Thoigian object.
 *
 * @param giay Number of seconds to add.
 * @return Updated Thoigian object.
 */

Thoigian Thoigian::operator+(int giay) {
	Thoigian tg = *this;
	tg.TinhLaiGio(tg.TinhGiay() + giay);
	return tg;
}

/**
 * @brief Subtracts a specified number of seconds from the time object and returns the updated object.
 *
 * This operator subtracts the specified number of seconds from the time object and returns the updated Thoigian object.
 *
 * @param giay Number of seconds to subtract.
 * @return Updated Thoigian object.
 */

Thoigian Thoigian::operator-(int giay) {
	Thoigian tg = *this;
	tg.TinhLaiGio(tg.TinhGiay() - giay);
	return tg;
}

/**
 * @brief Adds two Thoigian objects together and returns the result.
 *
 * This operator adds two Thoigian objects together and returns the result as a new Thoigian object.
 *
 * @param t Thoigian object to add.
 * @return New Thoigian object representing the sum of the two times.
 */

Thoigian Thoigian::operator+(const Thoigian& t) {
	Thoigian tg = *this;
	tg.TinhLaiGio(tg.TinhGiay() + t.TinhGiay());
	return tg;
}

/**
 * @brief Subtracts one Thoigian object from another and returns the result.
 *
 * This operator subtracts one Thoigian object from another and returns the result as a new Thoigian object.
 *
 * @param t Thoigian object to subtract.
 * @return New Thoigian object representing the difference between the two times.
 */

Thoigian Thoigian::operator-(const Thoigian& t) {
	Thoigian tg = *this;
	tg.TinhLaiGio(tg.TinhGiay() - t.TinhGiay());
	return tg;
}

/**
 * @brief Compares if two Thoigian objects are equal.
 *
 * This operator compares the total seconds of two time objects and returns true if they are equal, false otherwise.
 *
 * @param lhs Left operand to compare.
 * @param rhs Right operand to compare.
 * @return True if the times are equal, false otherwise.
 */
bool operator== (const Thoigian& lhs, const Thoigian& rhs) {
    return lhs.TinhGiay() == rhs.TinhGiay();
}

/**
 * @brief Compares if two Thoigian objects are not equal.
 *
 * This operator compares the total seconds of two time objects and returns true if they are not equal, false otherwise.
 *
 * @param lhs Left operand to compare.
 * @param rhs Right operand to compare.
 * @return True if the times are not equal, false otherwise.
 */
bool operator!= (const Thoigian& lhs, const Thoigian& rhs) {
    return lhs.TinhGiay() != rhs.TinhGiay();
}

/**
 * @brief Compares if the left Thoigian object is greater than the right one.
 *
 * This operator compares the total seconds of the two time objects and returns true if the left object represents a greater time, false otherwise.
 *
 * @param lhs Left operand to compare.
 * @param rhs Right operand to compare.
 * @return True if the left time is greater, false otherwise.
 */
bool operator> (const Thoigian& lhs, const Thoigian& rhs) {
    return lhs.TinhGiay() > rhs.TinhGiay();
}

/**
 * @brief Compares if the left Thoigian object is less than the right one.
 *
 * This operator compares the total seconds of the two time objects and returns true if the left object represents a smaller time, false otherwise.
 *
 * @param lhs Left operand to compare.
 * @param rhs Right operand to compare.
 * @return True if the left time is less, false otherwise.
 */
bool operator< (const Thoigian& lhs, const Thoigian& rhs) {
    return lhs.TinhGiay() < rhs.TinhGiay();
}

/**
 * @brief Compares if the left Thoigian object is greater than or equal to the right one.
 *
 * This operator compares the total seconds of the two time objects and returns true if the left object represents a greater or equal time, false otherwise.
 *
 * @param lhs Left operand to compare.
 * @param rhs Right operand to compare.
 * @return True if the left time is greater than or equal, false otherwise.
 */
bool operator>= (const Thoigian& lhs, const Thoigian& rhs) {
    return lhs.TinhGiay() >= rhs.TinhGiay();
}

/**
 * @brief Compares if the left Thoigian object is less than or equal to the right one.
 *
 * This operator compares the total seconds of the two time objects and returns true if the left object represents a smaller or equal time, false otherwise.
 *
 * @param lhs Left operand to compare.
 * @param rhs Right operand to compare.
 * @return True if the left time is less than or equal, false otherwise.
 */
bool operator<= (const Thoigian& lhs, const Thoigian& rhs) {
    return lhs.TinhGiay() <= rhs.TinhGiay();
}

/**
 * @brief Increments the Thoigian object by 1 second and returns the updated object.
 *
 * This method increases the time by 1 second and returns the updated Thoigian object.
 *
 * @return Updated Thoigian object.
 */
Thoigian& Thoigian::operator++() {
    *this = *this + 1;
    return *this;
}

/**
 * @brief Increments the Thoigian object by 1 second (postfix) and returns the original object.
 *
 * This method increases the time by 1 second (postfix) and returns the original Thoigian object before the increment.
 *
 * @param int Placeholder to differentiate between prefix and postfix increment.
 * @return The original Thoigian object before the increment.
 */
Thoigian Thoigian::operator++(int) {
    Thoigian tgtam = *this;
    *this = *this + 1;
    return tgtam;
}

/**
 * @brief Decrements the Thoigian object by 1 second and returns the updated object.
 *
 * This method decreases the time by 1 second and returns the updated Thoigian object.
 *
 * @return Updated Thoigian object.
 */
Thoigian& Thoigian::operator--() {
    *this = *this - 1;
    return *this;
}

/**
 * @brief Decrements the Thoigian object by 1 second (postfix) and returns the original object.
 *
 * This method decreases the time by 1 second (postfix) and returns the original Thoigian object before the decrement.
 *
 * @param int Placeholder to differentiate between prefix and postfix decrement.
 * @return The original Thoigian object before the decrement.
 */
Thoigian Thoigian::operator--(int) {
    Thoigian tgtam = *this;
    *this = *this - 1;
    return tgtam;
}

/**
 * @brief Overloads the output stream operator (<<) to print a Thoigian object.
 *
 * This operator allows you to print a Thoigian object to the output stream (e.g., console).
 *
 * @param os Output stream.
 * @param dt Thoigian object to output.
 * @return The output stream after the Thoigian object is printed.
 */
ostream& operator<< (ostream& os, const Thoigian& dt) {
    os << dt.iGio << ":" << dt.iPhut << ":" << dt.iGiay;
    return os;
}

/**
 * @brief Overloads the input stream operator (>>) to read a Thoigian object.
 *
 * This operator allows you to input a Thoigian object from the input stream (e.g., user input).
 *
 * @param is Input stream.
 * @param dt Thoigian object to read into.
 * @return The input stream after the Thoigian object is read.
 */
istream& operator>> (istream& is, Thoigian& dt) {
    is >> dt.iGio;
    is >> dt.iPhut;
    is >> dt.iGiay;
    return is;
}

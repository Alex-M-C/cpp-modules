#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int n) {
	this->value = n << this->fracBits;
}

/*
 * Moving bits is something we can't do with float numbers so knowing that n << 8 = n * 256 (2 raised to the power of 8).
 * Therefore roundf(n * (1 << this->fracBits)) = roundf(n * 256).
*/
Fixed::Fixed(const float n) {
	this->value = roundf(n * (1 << this->fracBits));
}

Fixed::Fixed(const Fixed& fixed) {
	this->value = fixed.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& fixed) {
	if (this != &fixed) {
		this->value = fixed.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const {
	return value;
}

void Fixed::setRawBits(int const raw) {
	value = raw;
}

int Fixed::toInt(void) const {
	return (this->value >> this->fracBits);
}

float Fixed::toFloat(void) const {
    return ((float)this->value / (float)(1 << this->fracBits));
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed& fixed) const {
	return (this->getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed& fixed) const {
	return (this->getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed& fixed) const {
	return (this->getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed& fixed) const {
	return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed& fixed) const {
	return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed& fixed) const {
	return (this->getRawBits() != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed& fixed) const {
	Fixed result;
	result.setRawBits(this->getRawBits() + fixed.getRawBits());
	return(result);
}

Fixed Fixed::operator-(const Fixed& fixed) const {
	Fixed result;
	result.setRawBits(this->getRawBits() - fixed.getRawBits());
	return(result);
}

Fixed Fixed::operator*(const Fixed& fixed) const {
	Fixed result;
	result.setRawBits((this->getRawBits() * fixed.getRawBits()) >> this->fracBits);
	return(result);
}

Fixed Fixed::operator/(const Fixed& fixed) const {
	Fixed result;
	result.setRawBits((this->getRawBits() << this->fracBits) / fixed.getRawBits());
	return(result);
}

Fixed& Fixed::operator++() {
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed result;
	result.setRawBits(this->getRawBits());
	this->setRawBits(this->getRawBits() + 1);
    return (result);
}

Fixed& Fixed::operator--() {
    this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed result;
	result.setRawBits(this->getRawBits());
	this->setRawBits(this->getRawBits() - 1);
    return (result);
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2) {
	return (f1 < f2 ? f1 : f2);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2) {
	return (f1 < f2 ? f1 : f2);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2) {
	return (f1 > f2 ? f1 : f2);
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2) {
	return (f1 > f2 ? f1 : f2);
}

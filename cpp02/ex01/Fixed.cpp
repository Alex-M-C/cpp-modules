#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->value = n << this->fracBits;
}

/*
 * Moving bits is something we can't do with float numbers so knowing that n << 8 = n * 256 (2 raised to the power of 8).
 * Therefore roundf(n * (1 << this->fracBits)) = roundf(n * 256).
*/
Fixed::Fixed(const float n) {
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(n * (1 << this->fracBits));
}

Fixed::Fixed(const Fixed& fixed) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = fixed.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed) {
		this->value = fixed.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
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

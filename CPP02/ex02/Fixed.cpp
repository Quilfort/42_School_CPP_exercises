#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
	this->value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(int const val)
{
	this->value = (val << fract_bits);
}

Fixed::Fixed(float const val)
{
	this->value= int(roundf(val * (1 << fract_bits)));
}

Fixed::Fixed(Fixed const &other)
{
	this->value = other.getRawBits();
}

Fixed &Fixed::operator=(Fixed const &other)
{
	this->value = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return float(this->value) / (1 << fract_bits);
}

int Fixed::toInt(void) const
{
	return this->value >> fract_bits;
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return o;
}
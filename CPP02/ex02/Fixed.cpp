#include "Fixed.hpp"
#include <iostream>
#include <cmath>

// Constructors
Fixed::Fixed(void)
{
	this->value = 0;
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

//Destructors
Fixed::~Fixed()
{
}

// Copy assignment
Fixed &Fixed::operator=(Fixed const &other)
{
	this->value = other.getRawBits();
	return (*this);
}

//Comparison operators
bool Fixed::operator>(const Fixed& right)
{
	return this->value > right.value;
}

bool Fixed::operator<(const Fixed& right)
{
	return this->value < right.value;
}

bool Fixed::operator>=(const Fixed& right)
{
	return this->value >= right.value;
}

bool Fixed::operator<=(const Fixed& right)
{
	return this->value <= right.value;
}

bool Fixed::operator==(const Fixed& right)
{
	return this->value == right.value;
}

bool Fixed::operator!=(const Fixed& right)
{
	return this->value != right.value;
}

//Arithmetic operators
Fixed Fixed::operator+(const Fixed& right)
{
	Fixed ret_val;

	ret_val.setRawBits(this->value + right.value);
	return (ret_val);
}

Fixed Fixed::operator-(const Fixed& right)
{
	Fixed ret_val;

	ret_val.setRawBits(this->value - right.value);
	return (ret_val);
}

Fixed Fixed::operator*(const Fixed& right)
{
	Fixed ret_val;

	ret_val.setRawBits(this->value * right.value);
	return (ret_val);	
}

Fixed Fixed::operator/(const Fixed& right)
{
	Fixed ret_val;

	ret_val.setRawBits(this->value * (1 << fract_bits) / right.value);
	return (ret_val);
}

//Increment/decrement
Fixed& Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed& Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return (temp);
}

//Member Functions
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

//Static member functions
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return b;
	return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a < b)
		return b;
	return a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.value > b.value)
		return b;
	return a;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.value < b.value)
		return b;
	return a;
}

//Output stream operator
std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return o;
}
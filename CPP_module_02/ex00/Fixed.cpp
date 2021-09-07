#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(int value) : _value(value)
{}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &src)
{
	cout << "Copy constructor called" << endl;
	this->_value = src._value;
}

Fixed& Fixed::operator=(const Fixed &src)
{
	cout << "Assignation operator called" << endl;
	this->_value = src._value;
	return *this;
}

int	Fixed::getRawBits() const
{
	cout << "getRawBits member function called" << endl;
	return this->_value;
}

void Fixed::setRawBits(const int raw)
{
	_value = raw;
}
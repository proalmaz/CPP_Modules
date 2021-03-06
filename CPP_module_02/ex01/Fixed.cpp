#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int value)
{
	cout << "Integer constructor called" << endl;
	_value = value * (1 << _fractorial);
}

Fixed::Fixed(const float value)
{
	cout << "Float constructor called" << endl;
	this->_value = roundf(value * (1 << _fractorial));
}

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

float Fixed::toFloat() const
{
	return static_cast<float>(_value ) / (1 << _fractorial);
}

int Fixed::toInt() const
{
	return (_value / (1 << _fractorial));
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

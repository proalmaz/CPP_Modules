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

bool Fixed::operator<(const Fixed &f2)
{
	return (_value < f2._value);
}

bool Fixed::operator<=(const Fixed &f2)
{
	return (_value <= f2._value);
}

bool Fixed::operator>(const Fixed &f2)
{
	return (_value > f2._value);
}

bool Fixed::operator>=(const Fixed &f2)
{
	return (_value >= f2._value);
}

bool Fixed::operator==(const Fixed &f2)
{
	return (_value == f2._value);
}

bool Fixed::operator!=(const Fixed &f2)
{
	return (_value != f2._value);
}

Fixed	&Fixed::operator+(Fixed &f2)
{
	return (Fixed(_value + f2._value));
}

Fixed	&Fixed::operator-(Fixed &f2)
{
	return (Fixed(_value - f2._value));
}

Fixed	&Fixed::operator*(Fixed &f2)
{
	return (Fixed(_value * f2._value));
}

Fixed	&Fixed::operator/(Fixed &f2)
{
	return (Fixed(_value / f2._value));
}

Fixed	&Fixed::operator++()
{
	_value++;
	return *this;
}

Fixed	&Fixed::operator--()
{
	_value--;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(_value);
	++(*this);
	return tmp;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(_value);
	--(*this);
	return tmp;
}

static Fixed		&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return &f1;
	else
		return &f2;
}

static Fixed		&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return &f1;
	else
		return &f2;
}

static const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return &f1;
	else
		return &f2;
}

static const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return &f1;
	else
		return &f2;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

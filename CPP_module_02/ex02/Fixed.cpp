#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
//	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int value)
{
//	cout << "Integer constructor called" << endl;
	_value = value << _fractorial;
}

Fixed::Fixed(const float value)
{
//	cout << "Float constructor called" << endl;
	this->_value = static_cast<int>(roundf(value * (1 << _fractorial)));
}

Fixed::~Fixed()
{
//	cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &src)
{
//	cout << "Copy constructor called" << endl;
	this->_value = src.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &src)
{
//	cout << "Assignation operator called" << endl;
	_value = src.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
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
	return (_value < f2.getRawBits());
}

bool Fixed::operator<=(const Fixed &f2)
{
	return (_value <= f2.getRawBits());
}

bool Fixed::operator>(const Fixed &f2)
{
	return (_value > f2.getRawBits());
}

bool Fixed::operator>=(const Fixed &f2)
{
	return (_value >= f2.getRawBits());
}

bool Fixed::operator==(const Fixed &f2)
{
	return (_value == f2.getRawBits());
}

bool Fixed::operator!=(const Fixed &f2)
{
	return (_value != f2.getRawBits());
}

Fixed	&Fixed::operator+(Fixed &f2)
{
	return (Fixed(this->toFloat() + f2.toFloat()));
}

Fixed	&Fixed::operator-(Fixed &f2)
{
	return (Fixed(this->toFloat() - f2.toFloat()));
}

Fixed	&Fixed::operator*(Fixed &f2)
{
	return (Fixed(this->toFloat() * f2.toFloat()));
}

Fixed	&Fixed::operator/(Fixed &f2)
{
	return (Fixed(this->toFloat() / f2.toFloat()));
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
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

Fixed		&Fixed::min(Fixed	&f1, Fixed	&f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed		&Fixed::max(Fixed	&f1, Fixed	&f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

Fixed const	&Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed const	&Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

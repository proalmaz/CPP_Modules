#pragma once

#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::string;
using std::cout;
using std::endl;

class Fixed
{
private:
	int					_value;
	static const int	_fractorial = 8;
	static const int    _exponent;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed(const Fixed& src);

	bool 	operator>(const Fixed &f2);
	bool 	operator<(const Fixed &f2);
	bool 	operator>=(const Fixed &f2);
	bool 	operator<=(const Fixed &f2);
	bool 	operator==(const Fixed &f2);
	bool 	operator!=(const Fixed &f2);

	Fixed	&operator=(const Fixed& src);
	Fixed	&operator+(Fixed &f2);
	Fixed	&operator-(Fixed &f2);
	Fixed	&operator*(Fixed &f2);
	Fixed	&operator/(Fixed &f2);

	Fixed	&operator++();
	Fixed	&operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed		&min(Fixed &f1, Fixed &f2);
	static const Fixed	&min(const Fixed &f1, const Fixed &f2);
	static Fixed		&max(Fixed &f1, Fixed &f2);
	static const Fixed	&max(const Fixed &f1, const Fixed &f2);


	float   toFloat(void) const;
	int     toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
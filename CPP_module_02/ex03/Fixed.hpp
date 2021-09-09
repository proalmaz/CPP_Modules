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
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed(const Fixed& src);

	bool 	operator>(Fixed const 	&f2) const;
	bool 	operator<(Fixed const 	&f2) const;
	bool 	operator>=(Fixed const	&f2) const;
	bool 	operator<=(Fixed const	&f2) const;
	bool 	operator==(Fixed const	&f2) const;
	bool 	operator!=(Fixed const	&f2) const;

	Fixed	&operator=(Fixed const &f2);
	Fixed	operator+(Fixed const &f2) const;
	Fixed	operator-(Fixed const &f2) const;
	Fixed	operator*(Fixed const &f2) const;
	Fixed	operator/(Fixed const &f2) const;

	Fixed	&operator++();
	Fixed	&operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed const	&min(Fixed const &a, Fixed const &b);
	static Fixed const	&max(Fixed const &a, Fixed const &b);
	Fixed				&min(Fixed	&a, Fixed	&b);
	Fixed				&max(Fixed	&a, Fixed	&b);


	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float   toFloat(void) const;
	int     toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
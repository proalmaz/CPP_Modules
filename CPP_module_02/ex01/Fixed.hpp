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
	Fixed&	operator=(const Fixed& src);

	float   toFloat(void) const;
	int     toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
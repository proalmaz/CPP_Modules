#pragma once

#include <iostream>
#include <string>

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
	Fixed(int value);
	~Fixed();
	Fixed(const Fixed& src);
	Fixed&	operator=(const Fixed& src);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
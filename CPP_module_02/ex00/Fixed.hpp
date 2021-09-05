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
	int m_value;
	static std::integral_constant<8>;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
};


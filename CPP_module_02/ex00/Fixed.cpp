#include "Fixed.hpp"

Fixed::Fixed()
{
	m_value = 0;
}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &fixed) : m_value(fixed.m_value)
{}
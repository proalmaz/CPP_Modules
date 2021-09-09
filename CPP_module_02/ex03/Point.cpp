#include "Point.hpp"

Point::Point() : m_x(Fixed(0)), m_y(Fixed(0)) {}

Fixed Point::getX() const { return m_x; }

Fixed Point::getY() const { return m_y; }

Point::Point(const Point &point) : m_x(point.getX()), m_y(point.getY()) {}

Point::~Point() {}

Point::Point(const float x, const float y) : m_x(Fixed(x)), m_y(Fixed(y)) {}

Point &Point::operator=(const Point &point) { return (*this); }

float Point::getXFloat() const { return (m_x.toFloat()); }

float Point::getYFloat() const { return (m_y.toFloat()); }

std::ostream &operator<<(std::ostream &out, const Point &point)
{
	out << point.getXFloat() << ", " << point.getYFloat();
	return out;
}
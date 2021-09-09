#pragma once

#include "Fixed.hpp"

class Point
{
private:
	Fixed const m_x;
	Fixed const m_y;
public:
	Point();
	~Point();
	Point(const Point &point);
	Point(const float x, const float y);

	Point& operator=(const Point &point);

	Fixed getX() const;
	Fixed getY() const;
	float getXFloat() const;
	float getYFloat() const;
};

std::ostream	&operator<<(std::ostream &out, const Point &point);
bool		bsp(Point const a, Point const b, Point const c, Point const point);


#include "Point.hpp"

Point::Point(void)
:	x(Fixed(0)),
	y(Fixed(0))
{}

Point::Point(const Fixed &x, const Fixed &y)
:	x(x),
	y(y)
{}

Point::Point(const float &x, const float &y)
:	x(Fixed(x)),
	y(Fixed(y))
{}

Point::~Point()
{}

Fixed	Point::getFixedX(void) const
{
	return (this->x);
}

Fixed	Point::getFixedY(void) const
{
	return (this->y);
}

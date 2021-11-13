#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	public:
		Point(void);
		Point(const Fixed &x, const Fixed &y);
		Point(const float &x, const float &y);
		~Point();

		Fixed	getFixedX(void) const;
		Fixed	getFixedY(void) const;

	private:
		const Fixed x;
		const Fixed y;
};

#endif

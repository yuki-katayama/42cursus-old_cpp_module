#include "Point.hpp"

Point sub_vector( Point const &a, Point const &b )
{
	return (Point(a.getFixedX().toFloat() - b.getFixedX().toFloat(),
					a.getFixedY().toFloat() - b.getFixedY().toFloat()));
}

bool bsq(Point const a, Point const b, Point const c, Point const point)
{
	Point ab = sub_vector(b, a);
	Point bp = sub_vector(point, b);

	Point bc = sub_vector(c, b);
	Point cp = sub_vector(point, c);

	Point ca = sub_vector(a, c);
	Point ap = sub_vector(point, a);

	//外積
	float c1 = ab.getFixedX().toFloat() * bp.getFixedY().toFloat() -
				ab.getFixedY().toFloat() * bp.getFixedX().toFloat();
	float c2 = bc.getFixedX().toFloat() * cp.getFixedY().toFloat() -
				bc.getFixedY().toFloat() * cp.getFixedX().toFloat();
	float c3 = ca.getFixedX().toFloat() * ap.getFixedY().toFloat() -
				ap.getFixedY().toFloat() * ap.getFixedX().toFloat();
	if (!(( c1 > 0 && c2 > 0 && c3 > 0) || (c1 < 0 && c2 < 0 && c3 < 0)))
	{
		return false;
	}
	return true;
}

#include <iostream>
#include "Point.hpp"

bool bsq(Point const a, Point const b, Point const c, Point const point);



int main(void)
{
	Point	x1(0, -1);
	Point	y1(1, 1);
	Point	z1(Fixed(-1), Fixed(1));
	Point	p1; /* (0, 0) */

	std::cout << "ノーマル: " << bsq(x1, y1, z1, p1) << std::endl;

	// /* 頂点 */
	Point	x2(0, -1);
	Point	y2(1, 1);
	Point	z2(Fixed(-1), Fixed(1));
	Point	p2(0, -1);
	std::cout << "頂点: " << bsq(x2, y2, z2, p2) << std::endl;

	// /* 辺上 */
	Point	x3(0, -1);
	Point	y3(1, 1);
	Point	z3(Fixed(-1), Fixed(1));
	Point	p3(0, 1);
	std::cout << "辺上: " << bsq(x3, y3, z3, p3) << std::endl;

	/* float */
	Point	x4(0, -1);
	Point	y4(1, 1);
	Point	z4(Fixed(-1), Fixed(1));
	Point	p4(0, 0.9);
	std::cout << "float 中: " << bsq(x4, y4, z4, p4) << std::endl;

	Point	x5(0, -1);
	Point	y5(1, 1);
	Point	z5(Fixed(-1), Fixed(1));
	Point	p5(0, -1.1);
	std::cout << "float 外: " << bsq(x5, y5, z5, p5) << std::endl;

	/* minus */
	Point	x6(0, -1);
	Point	y6(1, 1);
	Point	z6(Fixed(-1), Fixed(1));
	Point	p6(0, -2);
	std::cout << "minus: " << bsq(x6, y6, z6, p6) << std::endl;
	return (0);
}
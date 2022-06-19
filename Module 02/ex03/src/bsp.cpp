#include "../FixedPoint/inc/Fixed.hpp"
#include "../inc/Point.hpp"
//#include <cmath>

int	get_area(Point const a, Point const b, Point const c)
{
	Fixed	tmp;
	int	area;

	tmp = ( (b.get_x() * a.get_y() - a.get_x() * b.get_y())
		   	+ (c.get_x() * b.get_y() - b.get_x() * c.get_y()) 
			+ (a.get_x() * c.get_y() - c.get_x() * a.get_y()) ) / 2;
	area = tmp.toFloat();
	return (area >= 0 ? area : -area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	int	area1 = get_area(a, b, point);
	int	area2 = get_area(a, c, point);
	int	area3 = get_area(b, c, point);
	int	area0 = get_area(a, b, c);
	
	return (area0 == area1 + area2 + area3);
}

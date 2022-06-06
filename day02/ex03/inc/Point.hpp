#ifndef POINT_HPP
# define POINT_HPP

#include "../FixedPoint/inc/Fixed.hpp"

class Point
{
	private:
		Fixed __x;
		Fixed __y;


	public:
		Point();
		~Point();
		Point(const Point &P);
		Point(const float x,  const float y);
		
		void	operator=(const Point &P);
		const	Fixed	&get_x(void) const;
		const	Fixed	&get_y(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
int	get_area(Point const a, Point const b, Point const c);



#endif /* POINT_HPP */

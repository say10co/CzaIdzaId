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
		
		void	operator=(const Fixed &P);
}



#endif /* POINT_HPP */

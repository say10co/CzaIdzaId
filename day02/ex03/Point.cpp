#include "../FixedPoint/inc/Fixed.hpp"

Point::Point()
{
	__x = 0;
	__y = 0;
}

Point::~Point()
{
}

Point::Point(const Point &P): __x(P.x), __y(P.y)
{ 
}

Point::operator=(const Point &P)
{
	this->__x = P.__x;
	this->__y = P.__y;
	return (*this);
}

Point::Point(const float x,  const float y)
{
	this->__x = x;
	this->__y = y;
}


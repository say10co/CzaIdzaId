/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:20:34 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/07 22:37:47 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../FixedPoint/inc/Fixed.hpp"
#include "../inc/Point.hpp"
#include <cmath>

Point::Point()
{
	__x = 0;
	__y = 0;
}

Point::~Point()
{
}

Point::Point(const Point &P): __x(P.__x), __y(P.__y)
{ 
}

void	Point::operator=(const Point &P)
{
	this->__x = P.__x;
	this->__y = P.__y;
}

Point::Point(const float x,  const float y)
{
	this->__x = x;
	this->__y = y;
}

const Fixed	&Point::get_x(void) const
{
	return (this->__x);
}

const	Fixed	&Point::get_y(void) const
{
	return (this->__y);
}

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

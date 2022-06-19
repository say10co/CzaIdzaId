/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:20:34 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/10 22:00:53 by adriouic         ###   ########.fr       */
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

std::ostream& 	operator<<(std::ostream & os, const Point &P)
{
	os << " (" << P.get_x() << ", " << P.get_y() << ") ";
	return (os);
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

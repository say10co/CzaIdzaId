/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:18:33 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/08 21:24:22 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

bool			bsp(Point const a, Point const b, Point const c, Point const point);
int				get_area(Point const a, Point const b, Point const c);
std::ostream& 	operator<<(std::ostream & os, const Point &P);

#endif /* POINT_HPP */

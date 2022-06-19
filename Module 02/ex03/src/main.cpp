/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:20:52 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/08 22:04:30 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../FixedPoint/inc/Fixed.hpp"
#include "../inc/Point.hpp"

typedef struct s_triangle
{
	Point a;
	Point  b;
	Point  c;

} t_triangle;


void	check_point(const t_triangle *T, Point const &p)
{
	std::cout << "A:" << T->a << std::endl;
	std::cout << "B:" << T->b <<  std::endl;
	std::cout << "C:" << T->c << std::endl;
	std::cout << "P:" << p << std::endl;

	if (bsp(T->a,T-> b, T->c, p))
		std::cout << "Poit P" << p << "is insde ABC" << std::endl;
	else
		std::cout << "Poit P" << p << "is outside ABC" << std::endl;
}

int main(void)
{
	t_triangle	triangle;
	Point		p(4.0f, 2.0f);
	
	triangle.a = Point(3.0f, 2.0f);
	triangle.b = Point(6.0f, 2.0f);
	triangle.c = Point(10.0f, 6.0f);

	check_point(&triangle, p);
	
	p = Point(triangle.a);
	check_point(&triangle, p);

	p  = Point(11.0f, 6.0f);
	check_point(&triangle, p);

	return (0);

}


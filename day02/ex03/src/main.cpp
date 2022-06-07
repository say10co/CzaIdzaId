/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:20:52 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/07 22:40:05 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../FixedPoint/inc/Fixed.hpp"
#include "../inc/Point.hpp"


int main(void)
{
	Point const a(3.0f, 2.0f);
	Point const b(6.0f, 2.0f);
	Point const c(10.0f, 6.0f);
	Point const p(4.0f, 2.0f);

	std::cout << bsp(a, b, c, p) << std::endl;

}

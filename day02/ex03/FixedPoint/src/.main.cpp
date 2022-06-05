/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:56:54 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/05 22:28:25 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include <iostream>


#include <iostream>
int main( void ) {

	Fixed a (42.42f);
	Fixed const b (13.37f);
	Fixed const e (b);

	Fixed tmp;

	//Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout <<"a is :" <<  a << std::endl;
	std::cout <<"b is :" << b  << std::endl;
	std::cout <<"e is :" << e  << std::endl;
	
	std::cout << "a > b : " << (a > b) << std::endl;
	std::cout << "a < b : " << (a < b) << std::endl;

	std::cout << "e >= a: " << (e >= a) << std::endl;
	std::cout << "a <= e : " << (a <= e) << std::endl;
	
	std::cout << "e != a: " << (e != a) << std::endl;
	std::cout << "a == e : " << (a == e) << std::endl;
	
	tmp = a + e;


	std::cout << "tmp = a + e : " << tmp << std::endl;
	tmp = a - e;
	std::cout << "tmp = a - e : " << tmp << std::endl;
	tmp = a * e;
	std::cout << "tmp = a * e : " << tmp << std::endl;
	tmp = a / e;
	std::cout << "tmp = a * e : " << tmp << std::endl;

	tmp.setRawBits(1);
	
	std::cout << "tmp-- :"  << --tmp << std::endl;
	std::cout << "min(" << a << ", " << b << ") :" << Fixed::min(a, b) << std::endl;
	std::cout << "max(" << a << ", " << b << ") :" << Fixed::max(a, b) << std::endl;

	//std::cout << ++a << std::endl;
	//std::cout << a << std::endl;
	//std::cout << a++ << std::endl;
	//std::cout << a << std::endl;
	//std::cout << b << std::endl;
	//std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}


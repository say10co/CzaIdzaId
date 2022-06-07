/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPoint.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:52:09 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/07 15:14:14 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include  <cmath>
#include "../inc/Fixed.hpp"

const int	Fixed::__nb_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed	&P)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = P;
	//this->__fixed_point = P.__fixed_point;
}

Fixed::Fixed(const int I)
{
	// this is equivalant to I * 2^(number of fractional bits)
	this->__fixed_point = I << this->__nb_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float F)
{
	// (1 << this->__nb_bits)  is equivalant to 2^(__nb_bits);
	std::cout << "Float constructor called" << std::endl;
	this->__fixed_point = F * (1 << this->__nb_bits);
}

float Fixed::toFloat(void) const
{
	return (this->__fixed_point / (float)(1 << this->__nb_bits));
}

int	Fixed::toInt(void) const
{
	return (this->__fixed_point / (1 << this->__nb_bits));
}

void	Fixed::operator=(const Fixed	&P)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(P.getRawBits());
}

std::ostream	&operator<<(std::ostream &os, const Fixed  &fp)
{
	os << fp.toFloat();
	return (os);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->__fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->__fixed_point = raw;
}

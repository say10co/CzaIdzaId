/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 17:26:44 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/08 21:10:02 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <iostream>
#include  <cmath>

#include "../inc/Fixed.hpp"

const int	Fixed::__nb_bits = 8;

Fixed::Fixed()
{
	this->setRawBits(0);
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed	&P) 
{
	this->setRawBits(P.getRawBits());
}

Fixed::Fixed(const int I)
{
	// this is equivalant to I * 2^(number of fractional bits)
	this->__fixed_point = I << this->__nb_bits;
}

Fixed::Fixed(const float F)
{
	//(1 << this->__nb_bits)  is equivalant to 2^(__nb_bits);
	this->__fixed_point = roundf(F * (1 << this->__nb_bits));
}

float Fixed::toFloat(void) const
{
	return (this->__fixed_point / (float)(1 << this->__nb_bits));
}

int	Fixed::toInt(void) const
{
	return (this->__fixed_point / (1 << this->__nb_bits));
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->__fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->__fixed_point = raw;
}

Fixed 	&Fixed::min(Fixed &fp1, Fixed &fp2)
{
	return ( (fp1 > fp2 ) ? fp2 : fp1);
}

const Fixed 	&Fixed::min(const Fixed &fp1, const Fixed &fp2)
{
	return ( (fp1 > fp2 ) ? fp2 : fp1);
}

Fixed 	&Fixed::max(Fixed &fp1, Fixed &fp2)
{
	return ( (fp1 < fp2 ) ? fp2 : fp1);
}

const Fixed 	&Fixed::max(const Fixed &fp1, const Fixed &fp2)
{
	return ( (fp1 < fp2 ) ? fp2 : fp1);
}

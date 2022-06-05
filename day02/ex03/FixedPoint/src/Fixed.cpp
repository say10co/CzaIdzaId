/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 17:26:44 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/05 22:27:35 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <iostream>
#include "../inc/Fixed.hpp"
#include  <cmath>

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

// Operators

void	Fixed::operator=(const Fixed	&P)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(P.getRawBits());
}

std::ostream& operator<<(std::ostream &os, const Fixed  &fp)
{
	os << fp.toFloat();
	return (os);
}

bool	Fixed::operator>(const Fixed &fp) const
{
	return (this->getRawBits() > fp.getRawBits());
}

bool	Fixed::operator<(const Fixed &fp) const
{
	return (this->getRawBits() < fp.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fp) const
{
	return (this->getRawBits() >= fp.getRawBits());
}

bool	Fixed::operator<=(const Fixed &fp) const
{
	return (this->getRawBits() <= fp.getRawBits());
}

bool	Fixed::operator!=(const Fixed &fp) const
{
	return (this->getRawBits() != fp.getRawBits());
}

bool	Fixed::operator==(const Fixed &fp) const
{
	return (this->getRawBits() == fp.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &fp) const
{
	return (Fixed(this->toFloat() + fp.toFloat()));

}

Fixed	Fixed::operator-(const Fixed &fp) const
{
	return (Fixed(this->toFloat() - fp.toFloat()));

}

Fixed	Fixed::operator*(const Fixed &fp) const
{
	return (Fixed(this->toFloat() * fp.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &fp) const
{
	return (Fixed(this->toFloat() / fp.toFloat()));
}

Fixed	&Fixed::operator++(void) 
{
	this->__fixed_point += 1;
	return(*this);
}

Fixed	Fixed::operator++(int) 
{
	Fixed tmp (*this);
	this->__fixed_point += 1;
	return(tmp);
}
Fixed	&Fixed::operator--(void) 
{
	this->__fixed_point -= 1;
	return(*this);
}

Fixed	Fixed::operator--(int) 
{
	Fixed tmp (*this);
	this->__fixed_point -= 1;
	return(tmp);
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

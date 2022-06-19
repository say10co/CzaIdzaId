/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:06:09 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/10 21:52:11 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

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
	Fixed	tmp;

	tmp.setRawBits(this->__fixed_point + fp.__fixed_point);
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &fp) const
{
	Fixed	tmp;

	tmp.setRawBits(this->__fixed_point - fp.__fixed_point);
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &fp) const
{
	// not benefeting from fixed point but does the job
	return (Fixed(this->toFloat() * fp.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &fp) const
{
	// not benefeting from fixed point but does the job
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

Fixed	&Fixed::operator=(const Fixed	&P)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(P.getRawBits());
	return (*this);
}

std::ostream& operator<<(std::ostream &os, const Fixed  &fp)
{
	os << fp.toFloat();
	return (os);
}

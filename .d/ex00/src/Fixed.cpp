/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPoint.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:52:09 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/04 18:27:06 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  <iostream>
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

	this->setRawBits(P.getRawBits());
}


void	Fixed::operator=(const Fixed	&P)
{
	std::cout << "Copy assignment operator called" << std::endl;

	this->setRawBits(P.getRawBits());
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->__fixed_point);
}

void	Fixed::setRawBits(int const raw)
{

	this->__fixed_point = raw;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPoint.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:52:09 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/03 16:38:10 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  <iostream>
#include "FixedPoint.hpp"

const int	FixedPoint::__nb_bits = 8;

FixedPoint::FixedPoint()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

FixedPoint::FixedPoint(FixedPoint	&P) 
{

	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(P.__fixed_point);
}


void	FixedPoint::operator=(const FixedPoint	&P)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(P.__fixed_point);
}

FixedPoint::~FixedPoint()
{
	std::cout << "Destructor called" << std::endl;
}

int	FixedPoint::getRawBits(void) const
{

	std::cout << "getRawBits member function called" << std::endl;
	return (this->__fixed_point);
}

void	FixedPoint::setRawBits(int const raw)
{

	this->__fixed_point = raw;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPoint.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:52:09 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/03 16:49:57 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  <iostream>
#include "../inc/FixedPoint.hpp"

const int	FixedPoint::__nb_bits = 8;

FixedPoint::FixedPoint()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

FixedPoint::FixedPoint(FixedPoint	&P) 
{

	std::cout << "Copy constructor called" << std::endl;

	this->setRawBits(P.getRawBits());
}


void	FixedPoint::operator=(const FixedPoint	&P)
{
	std::cout << "Copy assignment operator called" << std::endl;

	this->setRawBits(P.getRawBits());
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


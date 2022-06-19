/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 02:05:00 by adriouic          #+#    #+#             */
/*   Updated: 2022/05/24 02:05:01 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double"
		<<"-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money."
			<< "You didn’t putenough bacon in my burger! If you did,"
			<< "	I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free."
			<< "I’ve been coming for years whereas you"
       			<< "started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to "
		<< "speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	int	index;
	std::string	calls[] = {"DEBUG","INFO", "WARNING", "ERROR"};

	index = 0;
	while (index < 4 && level != calls[index])
		index++;
	if (index < 4)
		(this->*_methodes[index])();
	else
		std::cout << "Complaint level not found!!" << std::endl;
}

Harl::Harl()
{
	this->_methodes[0] = &Harl::debug;
	this->_methodes[1] = &Harl::info;
	this->_methodes[2] = &Harl::warning;
	this->_methodes[3] = &Harl::error;
}

Harl::~Harl(void)
{
}


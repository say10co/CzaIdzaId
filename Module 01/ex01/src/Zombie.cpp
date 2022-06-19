/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 01:13:34 by adriouic          #+#    #+#             */
/*   Updated: 2022/05/24 01:13:36 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie( std::string s)
{
	this->_name = s;
}

Zombie::Zombie( void )
{
	std::string	default_name;

	default_name = "new_zombie";
	this->_name = default_name;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << "  Destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name( std::string name)
{
	this->_name = name;
}

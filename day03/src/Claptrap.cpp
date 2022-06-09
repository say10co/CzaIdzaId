/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:04:55 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/09 13:20:29 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap()
	: __hit_point(10), __energy_point(10), __attack_damage(0)
{
}

ClapTrap::~ClapTrap()
{
}

ClapTrap::ClapTrap(const ClapTrap &C)
{
	*this = C;
}

ClapTrap::ClapTrap(const std::string &name)
	: __name(name), __hit_point(10), __energy_point(10), __attack_damage(0)  
{

}

void	ClapTrap::operator=(const ClapTrap &C)
{
	this->__name = C.__name;
	this->__hit_point = C.__hit_point;
	this->__energy_point = C.__energy_point;
	this->__attack_damage = C.__attack_damage;
}

void ClapTrap::attack(const std::string& target)
{

	std::cout << "ClapTrap " << this->__name << "attacks "
	<< target << ", causing " << this->__attack_damage << " Points of damage";
	this->__energy_point -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->__name << "lost" << amount << "hit points";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->__name << "got" << amount << " hit point back";
	this->__energy_point -= 1;
}

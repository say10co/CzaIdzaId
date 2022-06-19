/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 23:57:29 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/13 23:57:30 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

// Specify the constructor using list initializer

FragTrap::FragTrap()
	: ClapTrap("FragTrap")
{
	this->__hit_point = Default_hitpoints;
	this->__energy_point = Default_energypoints;
	this->__attack_damage = Default_attackdamage;

	std::cout << "(FragTrap) Constructor called!" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
	: ClapTrap(name)
{
	this->__hit_point = Default_hitpoints;
	this->__energy_point = Default_energypoints;
	this->__attack_damage = Default_attackdamage;

	std::cout << "(FragTrap) Paramiterised Constructor called!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "(FragTrap) Distructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap & frag)
	: ClapTrap(frag)
{
	*this = frag;	
}

FragTrap& FragTrap::operator=(const FragTrap &frag)
{
	this->__name = frag.__name;
	this->__hit_point = frag.__hit_point;
	this->__energy_point = frag.__energy_point;

	this->__attack_damage = frag.__attack_damage;
	std::cout << "(FragTrap) Assignment operator overload " << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->get_name()  << " says HighFive!!!!" << std::endl;
}

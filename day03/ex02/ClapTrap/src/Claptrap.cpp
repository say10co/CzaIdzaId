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
	std::cout << "(ClapTrap) Default Constructor Called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "(ClapTrap) Distructor Called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &C)
{

	*this = C;
	std::cout << "(ClapTrap) Copy Constructor Called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
	: __name(name), __hit_point(10), __energy_point(10), __attack_damage(0)  
{

}

ClapTrap::ClapTrap(const std::string &name, uint_ct hp, uint_ct ep, uint_ct ad)
{
	std::cout << "(ClapTrap) Parameterized Constructor Called!" << std::endl;
	this->__name = name;
	this->__hit_point = hp;
	this->__energy_point = ep;
	this->__attack_damage = ad;
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

	if (this->__hit_point && this->__energy_point)
	{
		std::cout << "ClapTrap " << this->__name << " attacks "
			<< target << ", causing " << this->__attack_damage << " Points of damage.\n";
		this->__energy_point -= 1;
	}
	else
		std::cout << "Attack Failed!"  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->__hit_point >= amount)
	{
		std::cout << "ClapTrap " << this->__name << " lost " << amount << " hit points.\n";
		this->__hit_point -= amount;
	}
	else
		std::cout << "Can't take  any more damage!." << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->__hit_point && this->__energy_point)
	{
		 std::cout << "ClapTrap " << this->__name << " got " << amount << " hit point back.\n";
		this->__hit_point += amount;
		this->__energy_point -= 1;
	}
	else
		std::cout << "Repair Failed!." << std::endl;
}

unsigned int ClapTrap::get_attack_damage(void) const
{
	return (__attack_damage);
}

void	ClapTrap::set_attack_damage(uint_ct damage)
{
	this->__attack_damage = damage;
}

const std::string &ClapTrap::get_name(void) const
{
	return (__name);
}

void	ClapTrap::set_name(const std::string &name)
{
	this->__name = name;
}

unsigned int ClapTrap::get_hit_point(void) const
{
	return (__hit_point);
}

void	ClapTrap::set_hit_point(uint_ct hitpoint)
{
	this->__hit_point = hitpoint;
}

unsigned int ClapTrap::get_energy_point(void) const
{
	return (__energy_point);
}

void	ClapTrap::set_energy_point(uint_ct enegy_point)
{
	this->__energy_point = enegy_point;
}

void ClapTrap::status(void)
{
	std::cout << "*-------------------*" << std::endl;
	std::cout << "|>        " <<  this->__name << std::endl;
	std::cout << "|> Hit Points: " <<  this->__hit_point <<  std::endl;
	std::cout << "|> Energy Points: " <<  this->__energy_point <<  std::endl;
	std::cout << "|> Attack Damage: " <<  this->__attack_damage <<  std::endl;
	std::cout << "*--------------------*" << std::endl;
}

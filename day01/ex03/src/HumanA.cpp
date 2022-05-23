
#include "../includes/HumanA.hpp"

HumanA::HumanA( std::string name,  Weapon & weapon): _weapon(weapon)
{
	this->_name = name;
	//this->_weapon = &weapon;
}

HumanA::~HumanA( void )
{
       	//non
}

void	HumanA::setName( std::string name)
{
	this->_name = name;
}

std::string	HumanA::getName( void)
{
	return (this->_name);
}

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with their ";
	std::cout << this->_weapon.getType() << std::endl;	
}


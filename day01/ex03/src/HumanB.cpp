#include "../includes/HumanB.hpp"

HumanB::HumanB()
{
	//non	
}

HumanB::~HumanB( void )
{
	//non	
}

HumanB::HumanB( std::string	name): _weapon(NULL)
{
	this->_name = name;
}

HumanB::HumanB( std::string	name, Weapon & weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
}

std::string	HumanB::getName( void )
{
	return (this->_name);
}

void	HumanB::setName( std::string	name)
{
	this->_name = name;
}

void	HumanB::attack( void )
{
	std::cout << this->_name << " attacks with their ";
	if (_weapon == NULL)
		std::cout << "insultes" << std::endl;
	else
		std::cout <<  this->_weapon->getType() << std::endl;	
}
void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

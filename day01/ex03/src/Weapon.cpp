#include "../includes/Weapon.hpp"

Weapon::Weapon()
{
	// none
}

Weapon::Weapon( std::string	type)
{
	this->_type = type;
}

Weapon::~Weapon( void )
{
	// none
}

void	Weapon::setType( std::string type)
{
	this->_type = type;
}

const std::string& Weapon::getType( void ) const
{
	return (this->_type);
}

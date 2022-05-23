#include "Zombie.hpp"

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

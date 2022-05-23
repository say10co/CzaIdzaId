#include "Zombie.hpp"

Zombie *Zombie::newZombie( std::string	name )
{
	Zombie	*__zombie;

	__zombie = new Zombie (name);
	return (__zombie);
}

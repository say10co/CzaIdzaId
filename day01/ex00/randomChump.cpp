#include "Zombie.hpp"

void	Zombie::randomChump( std::string name)
{
	Zombie 	__zombie (name);

	__zombie.announce();
}

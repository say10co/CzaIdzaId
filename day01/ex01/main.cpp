#include "Zombie.hpp"

#define nb_zombies 42

int main(void)
{
	Zombie	zombie;
	Zombie	*all_zombies;

	zombie.announce();
	all_zombies = zombie.zombieHorde(nb_zombies, "bighead");
	if (all_zombies == nullptr)
		return (1);
	for (int i = 0; i < nb_zombies ; i++)
	{
		all_zombies[i].announce();
	}
	delete [] all_zombies;
	return (0);
}

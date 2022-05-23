#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie	*zombies;
	zombies = new (std::nothrow) Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombies[i].set_name(name);
	}
	return (zombies);
}

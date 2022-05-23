#include "Zombie.hpp"

int main(void)
{
	Zombie	test;
	Zombie	*z_p;

	test.announce();
	z_p = test.newZombie("New Zombie");
	z_p->announce();
	delete z_p;
	return (0);
}

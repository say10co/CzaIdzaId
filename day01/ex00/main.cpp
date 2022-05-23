#include "Zombie.hpp"

int main(void)
{
	Zombie	test ("zombie");
	Zombie	*z_p;

	z_p = test.newZombie("New Zombie");
	test.announce();
	z_p->announce();
	delete z_p;
	return (0);
}

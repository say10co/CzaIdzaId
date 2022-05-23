#include "Harl.hpp"


int main(int ac,  char **argv)
{
	if (ac != 2)
		return (42);
	Harl	harl;

	harl.complain(argv[1]);
	return (0);
}


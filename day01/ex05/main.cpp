#include "Harl.hpp"


int main(void)
{
	Harl	harl;

	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("TEST123");

	return (0);
}


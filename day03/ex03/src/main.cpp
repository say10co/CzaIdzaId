#include <iostream>
#include "../inc/DiamondTrap.hpp"


int main(void)
{
	DiamondTrap D1("Nerve");
				std::cout << std::endl;
	DiamondTrap D2;
				std::cout << std::endl;
	DiamondTrap D3(D1);
				std::cout << std::endl;

	D2 = D1;
	
	D1.whoAmI();
	D2.whoAmI();
	D3.whoAmI();


	D1.attack(D2.get_name());
	D1.attack(D2.get_name());

	D1.status();
				std::cout << std::endl;
	D2.status();
				std::cout << std::endl;
	D2.beRepaired(D2.get_attack_damage());
	D1.status();
				std::cout << std::endl;
	D2.status();
				std::cout << std::endl;
	
	return (0);
}

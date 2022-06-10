#include "../inc/ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap s0;
	s0.set_name("S0");

	ScavTrap s1;
	s1.set_name("S1");

	s0.status();
	s1.status();

	s0.guardGate();
	s1.guardGate();
	
	s1.attack("Scav S0");
	s0.takeDamage(s1.get_attack_damage());
	
	s0.status();
	s1.status();
	
	s0.beRepaired(10);
	s0.status();


}

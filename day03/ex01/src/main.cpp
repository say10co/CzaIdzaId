#include "../inc/ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap s;
	ScavTrap s0("Scav0");
	ScavTrap s1("Scav1");
	ScavTrap s2(s0);

	s.status();
	s0.status();
	s1.status();
	s2.status();

	s0.guardGate();
	s1.guardGate();
	
	s1.attack("Scav0");
	s0.takeDamage(s1.get_attack_damage());
	

	s1.status();
	s0.status();
	
	s0.beRepaired(10);
	s0.status();


}

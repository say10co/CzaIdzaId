#include <iostream>
#include "../inc/FragTrap.hpp"

int main()
{
	FragTrap s;
	FragTrap s0("Frag0");
	FragTrap s1("Frag1");
	FragTrap s2(s1);

	s.status();
	s0.status();
	s1.status();
	s2.status();

	s0.highFivesGuys();
	s1.highFivesGuys();
	
	s1.attack("Frag0");
	s0.takeDamage(s1.get_attack_damage());
	
	s0.status();
	s1.status();
	
	s0.beRepaired(10);
	s0.status();


}

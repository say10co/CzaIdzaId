#include "../inc/FragTrap.hpp"

// Specify the constructor using list initializer
FragTrap::FragTrap()
	: ScavTrap("FragTrap", 100, 100, 30)
{
	std::cout << "(FragTrap) Constructor called!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "(FragTrap) Distructor called!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &frag)
{
	this->set_name(frag.get_name());
	this->set_hit_point(frag.get_energy_point());
	this->set_energy_point(frag.get_hit_point());
	this->set_attack_damage(frag.get_attack_damage());

	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->get_name()  << " says HighFive!!!!" << std::endl;
}

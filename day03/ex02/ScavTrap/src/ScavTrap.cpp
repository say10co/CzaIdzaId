#include "../../ScavTrap/inc/ScavTrap.hpp"

// Specify the constructor using list initializer
ScavTrap::ScavTrap()
	: ClapTrap("ScaveTrap", 100, 50, 20)
{
	std::cout << "(ScaveTrap) Constructor called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "(ScaveTrap) Distructor called!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scav)
{
	this->set_name(scav.get_name());
	this->set_hit_point(scav.get_energy_point());
	this->set_energy_point(scav.get_hit_point());
	this->set_attack_damage(scav.get_attack_damage());

	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << this->get_name()  << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name, uint_ct hp, uint_ct ep, uint_ct ad)
{
	std::cout << "(ScavTrap) Parameterized Constructor Called!" << std::endl;
	this->set_name(name);
	this->set_hit_point(hp);
	this->set_energy_point(ep);
	this->set_attack_damage(ad);
}

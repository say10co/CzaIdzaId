#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap("ScavTrap")
{
	this->__hit_point = Default_hitpoints;
	this->__energy_point = Default_energypoints;
	this->__attack_damage = Default_attackdamage;

	std::cout << "(ScaveTrap) Constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
	:ClapTrap(name)
{
	this->__hit_point = Default_hitpoints;
	this->__energy_point = Default_energypoints;
	this->__attack_damage = Default_attackdamage;

	std::cout << "(ScaveTrap) Paramiterised Constructor called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "(ScaveTrap) Distructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &clap)
	: ClapTrap(clap)
{
	*this = clap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scav)
{
	this->__name = scav.__name;
	this->__hit_point =  scav.__hit_point;
	this->__energy_point = scav.__energy_point;
	this->__attack_damage = scav.__attack_damage;

	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << this->get_name()  << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->__hit_point && this->__energy_point)
	{
		std::cout << "ScavTrap " << this->ScavTrap::__name << " attacks "
			<< target << ", causing " << this->__attack_damage << " Points of damage.\n";
		this->__energy_point -= 1;
	}
	else
		std::cout << "Attack Failed!"  << std::endl;
}


#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap("Default_clap_name"), ScavTrap("Default_clap_name")
	  ,FragTrap("Default_clap_name")
{
	std::cout << "(DiamondTrap) Default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "(DiamondTrap) Distructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &diamond)
{
	this->ClapTrap::__name = diamond.ClapTrap::__name;
	this->__name = diamond.__name;
	this->__hit_point = diamond.__hit_point;
	this->__energy_point = diamond.__energy_point;
	this->__attack_damage = diamond.__attack_damage;

	std::cout << "(DiamondTrap) Assignment operator called" << std::endl;
	return (*this);
}

DiamondTrap::DiamondTrap(const std::string name)
	:ClapTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->__name = name;
	this->__hit_point = this->FragTrap::Default_hitpoints;
	this->__energy_point = this->ScavTrap::Default_energypoints;
	this->__attack_damage = this->FragTrap::Default_attackdamage;

	std::cout << "(DiamondTrap) Paramiterised constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & diamond)
{
	*this = diamond;
	std::cout << "(DiamondTrap) Copy constructor called" << std::endl;

}
void	DiamondTrap::whoAmI(void)
{
	std::cout << "DimondTrap Ddetived name : " << this->__name << std::endl;
	std::cout << "DimondTrap Base name : " << this->ClapTrap::__name << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

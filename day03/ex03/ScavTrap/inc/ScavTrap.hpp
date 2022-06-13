#ifndef SCAVETRAP_HPP
# define SCAVETRAP_HPP 

#include "../../ClapTrap/inc/ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	protected:
		static const unsigned int Default_hitpoints = 100;
		static const unsigned int Default_energypoints = 50;
		static const unsigned int Default_attackdamage = 20;
		
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap &clap);
		ScavTrap(const std::string &name);
		ScavTrap &operator=(const ScavTrap  &scav);
		
		void	attack(const std::string &target);
		void guardGate();
};


#endif /* SCAVETRAP_HPP */

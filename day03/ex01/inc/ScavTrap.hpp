#ifndef SCAVETRAP_HPP
# define SCAVETRAP_HPP 

#include "../ClapTrap/inc/ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ClapTrap &clap);
		ScavTrap &operator=(const ScavTrap  &scav);

		void guardGate();
};


#endif /* SCAVETRAP_HPP */

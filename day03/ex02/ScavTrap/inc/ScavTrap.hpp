#ifndef SCAVETRAP_HPP
# define SCAVETRAP_HPP 

#include "../../ClapTrap/inc/ClapTrap.hpp"

typedef const unsigned int uint_ct;

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ClapTrap &clap);
		ScavTrap &operator=(const ScavTrap  &scav);
		ScavTrap(const std::string &name, uint_ct hp, uint_ct ep, uint_ct ad);
		void guardGate();
};


#endif /* SCAVETRAP_HPP */

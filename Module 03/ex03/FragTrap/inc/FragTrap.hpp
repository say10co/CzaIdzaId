#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP 

#include "../../ClapTrap/inc/ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	protected:
		static const unsigned int Default_hitpoints = 100;
		static const unsigned int Default_energypoints = 100;
		static const unsigned int Default_attackdamage = 30;

	public:
		FragTrap();
		~FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &frag);
		FragTrap &operator=(const FragTrap  &frag);
	
		void highFivesGuys(void);
};




#endif /* FRAGTRAP_HPP */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP 

#include "../ScavTrap/inc/ScavTrap.hpp"

class FragTrap: public ScavTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap &frag);
		FragTrap &operator=(const FragTrap  &frag);
	
		void highFivesGuys(void);
};




#endif /* FRAGTRAP_HPP */

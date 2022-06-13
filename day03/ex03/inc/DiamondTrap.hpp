#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP 

#include "../FragTrap/inc/FragTrap.hpp"
#include "../ScavTrap/inc/ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string __name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap & dimond);
		DiamondTrap &operator=(const DiamondTrap &dimond);
		DiamondTrap(const std::string name);

		void	whoAmI();
		void attack(const std::string& target);



};

#endif /* DIAMONDTRAP_HPP */

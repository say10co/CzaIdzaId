#ifndef HUMANA_HPP
# define HUMANA_HPP 
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon	& _weapon;
		std::string	_name;
	public:
		HumanA(std::string name);
		HumanA(std::string name, Weapon & weapon);
		~HumanA(void);
		void	setName( std::string	name);
		void	attack( void);
		std::string	getName( void );



};
#endif /* HUMANA_HPP */

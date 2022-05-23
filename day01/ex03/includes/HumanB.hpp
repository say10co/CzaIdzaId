#ifndef HUMANB_HPP
# define HUMANB_HPP 

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;



	public:
		HumanB();
		~HumanB( void );
		HumanB(std::string	name);
		HumanB(std::string	name, Weapon & weapon);
		void		setName( std::string name);
		void		attack( void );
		void		setWeapon(Weapon &weapon);
		std::string	getName( void );

};
#endif /* HUMANB_HPP */

#ifndef WEAPON_HPP
# define WEAPON_HPP 

# include <iostream>

class Weapon
{
	private:
		std::string	_type;


	public:
		Weapon();
		Weapon(std::string weapon);
		~Weapon();
		const	std::string&	getType(void) const;
		void					setType(std::string	type);

};
#endif /* WEAPON_HPP */

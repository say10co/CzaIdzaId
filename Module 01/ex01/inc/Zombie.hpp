#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:
		void	announce(void);
		void	set_name(std::string name);
		Zombie	(std::string s);

		Zombie();
		~Zombie(void);
};

#endif /* ZOMBIE_HPP */



#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string name;


public:
	void	announce(void);
	void randomChump( std::string name );
	Zombie* newZombie( std::string name );
	Zombie(std::string s);
	~Zombie(void);


};

#endif /* ZOMBIE_HPP */



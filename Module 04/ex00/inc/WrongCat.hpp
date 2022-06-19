#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP 


#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &wrongcat);

		const std::string &get_sound(void);
		void	makeSound(void) const;

};


#endif /* WRONGCAT_HPP */

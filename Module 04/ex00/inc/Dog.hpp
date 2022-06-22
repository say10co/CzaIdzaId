#ifndef DOG_HPP
# define DOG_HPP 
#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &dog);
		Dog	&operator=(const Dog &dog);
	
		std::string	&get_sound();		
		void		makeSound(void) const;
};

#endif /* DOG_HPP */

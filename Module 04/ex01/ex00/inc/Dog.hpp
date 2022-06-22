#ifndef DOG_HPP
# define DOG_HPP 

#include "Animal.hpp"
#include "../../inc/Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *__brain;

	public:
		Dog();
		~Dog();
		Dog(const Dog &dog);
		Dog	&operator=(const Dog &dog);
	
		std::string	&get_sound();		
		void		makeSound(void) const;

		Brain *getBrain(void) const;
};

#endif /* DOG_HPP */

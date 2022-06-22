#ifndef ANIMAL_HPP
# define ANIMAL_HPP 

#include <iostream>

class Animal
{
	protected:
		std::string __type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		
		virtual void	makeSound(void) const;
		const std::string &getType(void) const;

};

#endif /* ANIMAL_HPP */

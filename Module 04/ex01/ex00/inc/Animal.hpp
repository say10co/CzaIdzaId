#ifndef ANIMAL_HPP
# define ANIMAL_HPP 
#include <iostream>

#include "../../inc/Brain.hpp"

class Animal
{
	protected:
		std::string __type;
		Brain		*__brain;

	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		
		virtual void	makeSound(void) const;
		const std::string &getType(void) const;

		void	think(const std::string &idea) const;
		void	expose_ideas(void) const;

};

#endif /* ANIMAL_HPP */

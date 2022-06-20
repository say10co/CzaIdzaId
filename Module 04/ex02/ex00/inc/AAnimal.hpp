#ifndef ANIMAL_HPP
# define ANIMAL_HPP 
#include <iostream>

#include "../../inc/Brain.hpp"

class AAnimal
{
	protected:
		std::string __type;
		Brain		*__brain;

	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal &animal);
		AAnimal &operator=(const AAnimal &animal);
		
		virtual void	makeSound(void) const = 0;
		const std::string &getType(void) const;

		void	think(const std::string &idea) const;
		void	expose_ideas(void) const;

};

#endif /* ANIMAL_HPP */

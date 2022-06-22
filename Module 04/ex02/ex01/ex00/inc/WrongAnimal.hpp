#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP 

#include <iostream>

class WrongAnimal
{
	protected:
		std::string __type;

	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &wrongAnimal);
		WrongAnimal &operator=(const WrongAnimal &wrongAnimal);
		
		void	makeSound(void) const;
		const std::string &getType(void) const;

};

#endif /* WRONGANIMAL_HPP */

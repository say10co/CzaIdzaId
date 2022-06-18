#ifndef CAT_HPP
# define CAT_HPP 

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &cat);
		//Cat	&operator=(const Cat &cat);

		const std::string &get_sound(void);
		void	makeSound(void) const;

};


#endif /* CAT_HPP */

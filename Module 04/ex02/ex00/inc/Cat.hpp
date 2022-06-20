#ifndef CAT_HPP
# define CAT_HPP 

#include "AAnimal.hpp"

class Cat: public AAnimal
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

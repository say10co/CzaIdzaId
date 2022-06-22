#ifndef CAT_HPP
# define CAT_HPP 

#include "Animal.hpp"
#include "../../inc/Brain.hpp"


class Cat: public Animal
{
	private:
		Brain *__brain;

	public:
		Cat();
		~Cat();
		Cat(const Cat &cat);
		Cat	&operator=(const Cat &cat);

		const std::string &get_sound(void);
		void	makeSound(void) const;

		Brain *getBrain(void) const;

};


#endif /* CAT_HPP */

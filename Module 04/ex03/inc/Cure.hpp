#ifndef CURE_HPP
# define CURE_HPP 

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string __name;
	public:
		Cure();
		~Cure();
		Cure &Cure(const Cure & cure);
		Cure &operator=(const Cure &cure);

		AMateria* clone(void) const;
};

#endif /* CURE_HPP */

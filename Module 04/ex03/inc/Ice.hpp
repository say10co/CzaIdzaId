#ifndef ICE_HPP
# define ICE_HPP 

#include "AMateria.hpp"

class Ice: public AMateria
{
	private:
		std::string __name;
	public:
		Ice();
		~Ice();
		Ice &Ice(const Ice & ice);
		Ice &operator=(const Ice & ice);

		AMateria* clone() const;

};

#endif /* ICE_HPP */

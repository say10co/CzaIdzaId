#ifndef AMATERIA_HPP
# define AMATERIA_HPP 

#include <iostream>
//#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string __type;

	public:
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria & amateria);
		AMateria &operator=(const AMateria & amateria);

		std::string const & getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

};

#endif /* AMATERIA_HPP */

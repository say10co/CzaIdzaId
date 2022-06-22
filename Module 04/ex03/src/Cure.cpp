#include "../inc/Cure.hpp"
#include "../inc/ICharacter.hpp"

Cure::Cure()
	:AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure & cure)
	: AMateria(cure.__type)
{
	*this = cure;
}

Cure &Cure::operator=(const Cure & cure)
{
	this->__type = cure.__type;
	return  (*this);
}

Cure *Cure::clone() const
{
	Cure *ret;

	ret = new Cure(*this);
	return (ret);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " <<  target.getName() << "'s wounds *" << std::endl;
}

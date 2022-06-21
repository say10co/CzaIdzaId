#include "../inc/AMateria.hpp"


AMateria::AMateria()
	:__type("AMateria_dflt")
{
	std::cout << "(AMateria) Default constructor called!" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "(AMateria) Distructor called!" << std::endl;
}

AMateria::AMateria(const std::string & type)
	:__type(type) //AMateria() delegating constructor
{
	std::cout << "(AMateria) Parameterised constructor called!" << std::endl;
}

AMateria::AMateria(const AMateria & amateria)
{
	*this = amateria;
	std::cout << "(AMateria) Copy constructor called!" << std::endl;
}

AMateria &AMateria::operator=(const AMateria & amateria)
{
	// There is misunderstanding on how this
	// should be implemented
	this->__type  = amateria.__type;
	std::cout << "(AMateria) operator overload  called!" << std::endl;
	return (*this);
}

const std::string & AMateria::getType(void) const
{
	return (this->__type);
}

void AMateria::use(ICharacter& target)
{
	(void) target;
}


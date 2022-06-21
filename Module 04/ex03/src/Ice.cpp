#include "../inc/Ice.hpp"
#include "../inc/ICharacter.hpp"

Ice::Ice()
	:AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice & ice)
	: AMateria(ice.__type)
{
	*this = ice;
}

Ice &Ice::operator=(const Ice & ice)
{
	this->__type = ice.__type;
	return (*this);
}

Ice *Ice::clone() const
{
	Ice *ret;

	ret = new Ice();
	return (ret);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " <<  target.getName() << " *" << std::endl;
}

#include "../inc/AAnimal.hpp"

AAnimal::AAnimal()
	: __type("AAnimal")
{
	std::cout << "(AAnimal) Constructor called!" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "(AAnimal) Distructor called!" << std::endl;
}

AAnimal::AAnimal(const AAnimal & animal)
{
	std::cout << "(AAnimal) Copy Constructor called!" << std::endl;
	*this = animal; 
}

AAnimal	&AAnimal::operator=(const AAnimal & animal)
{
	std::cout << "(AAnimal) operator overload called!" << std::endl;
	this->__type = animal.__type; 
	return (*this);
}

const std::string &AAnimal::getType(void) const 
{
	return (this->__type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << this->__type << " says ?????" << std::endl; 
}

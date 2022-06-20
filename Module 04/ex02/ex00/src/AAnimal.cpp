#include "../inc/AAnimal.hpp"
#include  <iostream>

AAnimal::AAnimal()
	: __type("AAnimal")
{
	std::cout << "(AAnimal) Constructor called!" << std::endl;
	__brain = new Brain();
}

AAnimal::~AAnimal()
{
	delete __brain;
	std::cout << "(AAnimal) Distructor called!" << std::endl;
}

AAnimal::AAnimal(const AAnimal & animal)
{
	std::cout << "(AAnimal) Copy Constructor called!" << std::endl;
	this->__type = animal.__type; 
}

AAnimal	&AAnimal::operator=(const AAnimal & animal)
{
	std::cout << "(AAnimal) operator overload called!" << std::endl;

	this->__type = animal.__type; 
	*(this->__brain) = *(animal.__brain);
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

void	AAnimal::think(const std::string &idea) const
{
	__brain->set_idea(idea);
}

void	AAnimal::expose_ideas(void) const
{
	__brain->get_ideas();
}

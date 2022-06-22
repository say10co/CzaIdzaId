
#include "../inc/WrongAnimal.hpp"
#include  <iostream>

WrongAnimal::WrongAnimal()
	: __type("WrongAnimal")
{
	std::cout << "(WrongAnimal) Constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "(WrongAnimal) Distructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & wrongwnimal)
{
	std::cout << "(WrongAnimal) Copy Constructor called!" << std::endl;
	this->__type = wrongwnimal.__type; 
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal & wrongwnimal)
{
	std::cout << "(WrongAnimal) operator overload called!" << std::endl;
	this->__type = wrongwnimal.__type; 
	return (*this);
}

const std::string &WrongAnimal::getType(void) const 
{
	return (this->__type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << this->__type << " says ????? (****Default Wronganimal message****)" << std::endl; 
}


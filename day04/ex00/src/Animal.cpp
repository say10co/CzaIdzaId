#include "../inc/Animal.hpp"
#include  <iostream>

Animal::Animal()
	: __type("Animal")
{
	std::cout << "(Animal) Constructor called!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "(Animal) Distructor called!" << std::endl;
}

Animal::Animal(const Animal & animal)
{
	std::cout << "(Animal) Copy Constructor called!" << std::endl;
	this->__type = animal.__type; 
}

Animal	&Animal::operator=(const Animal & animal)
{
	std::cout << "(Animal) operator overload called!" << std::endl;
	this->__type = animal.__type; 
	return (*this);
}

const std::string &Animal::getType(void) const 
{
	return (this->__type);
}

void	Animal::makeSound(void) const
{
	std::cout << this->__type << " says ?????" << std::endl; 
}


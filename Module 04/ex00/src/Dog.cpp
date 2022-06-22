#include "../inc/Dog.hpp"

Dog::Dog()
{
	std::cout << "(Dog) Default constructor Called!" << std::endl;
	this->__type = "dog";
}

Dog::~Dog()
{
	std::cout << "(Dog) Distructor Called!" << std::endl;
}

Dog::Dog(const Dog & dog)
{
	std::cout << "(Dog) copy constructor called";
	*this = dog;
}

Dog &Dog::operator=(const Dog & dog)
{
	this->__type = dog.__type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << this->__type << " says Woof" << std::endl;
}

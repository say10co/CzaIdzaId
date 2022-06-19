#include "../inc/Dog.hpp"

Dog::Dog()
{
	std::cout << "(Dog) Default constructor Called!" << std::endl;
	this->__type = "Dog";
}

Dog::~Dog()
{
	std::cout << "(Dog) Distructor Called!" << std::endl;
}

Dog::Dog(const Dog & dog)
{
	std::cout << "(Dog) copy constructor called";
	this->__type = dog.__type;
}

void	Dog::makeSound(void) const
{
	std::cout << this->__type << " says Woof" << std::endl;
}

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
	:Animal()
{
	std::cout << "(Dog) copy constructor called";
	*this = dog;

}

void	Dog::makeSound(void) const
{
	std::cout << this->__type << " says Woof" << std::endl;
}

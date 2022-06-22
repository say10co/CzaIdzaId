#include "../inc/Dog.hpp"

Dog::Dog()
{

	this->__brain = new Brain();
	this->__type = "dog";
	std::cout << "(Dog) Default constructor Called!" << std::endl;
}

Dog::~Dog()
{
	delete __brain;
	std::cout << "(Dog) Distructor Called!" << std::endl;
}

Dog::Dog(const Dog & dog)
{
	std::cout << "(Dog) copy constructor called" << std::endl;
	this->__brain = new Brain();
	*this = dog;
}

Dog &Dog::operator=(const Dog & dog)
{
	this->__type = dog.__type;
	(*this->__brain) = *(dog.__brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << this->__type << " says Woof" << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return (this->__brain);
}

#include "../inc/Cat.hpp"

Cat::Cat()
{
	__type = "Cat";
	__brain = new Brain();
	std::cout << "(Cat) Default constructor Called!" << std::endl;
}

Cat::~Cat()
{
	delete __brain;
	std::cout << "(Cat) Distructor Called!" << std::endl;
}

Cat::Cat(const Cat & cat)
{
	std::cout << "(Cat) copy constructor called";
	this->__brain = new Brain();
	*this = cat;
}

Cat &Cat::operator=(const Cat & cat)
{
	this->__type = cat.__type;
	*(this->__brain) = *(cat.__brain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << this->__type << " says Miaw" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (this->__brain);
}

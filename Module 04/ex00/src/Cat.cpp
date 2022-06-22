#include "../inc/Cat.hpp"

Cat::Cat()
{
	std::cout << "(Cat) Default constructor Called!" << std::endl;
	this->__type = "Cat";
}

Cat::~Cat()
{
	std::cout << "(Cat) Distructor Called!" << std::endl;
}

Cat::Cat(const Cat & cat)
{
	std::cout << "(Cat) copy constructor called";
	*this = cat;
}

Cat &Cat::operator=(const Cat & cat)
{
	this->__type = cat.__type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << this->__type << " says Miaw" << std::endl;
}


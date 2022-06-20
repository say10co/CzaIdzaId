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
	:Animal()
{
	std::cout << "(Cat) copy constructor called";
	*(this) = cat;
}

void	Cat::makeSound(void) const
{
	std::cout << this->__type << " says Miaw" << std::endl;
}


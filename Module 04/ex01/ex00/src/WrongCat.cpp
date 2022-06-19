
#include "../inc/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "(WrongCat) Default constructor Called!" << std::endl;
	this->__type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "(WrongCat) Distructor Called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat & WrongCat)
{
	std::cout << "(WrongCat) copy constructor called";
	this->__type = WrongCat.__type;
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->__type << " says Miaw" << std::endl;
}


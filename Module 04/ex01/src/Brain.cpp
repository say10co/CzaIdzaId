#include "../inc/Brain.hpp"

Brain::Brain()
{
	__ideas = new (std::nothrow) std::string[100];
	if (!__ideas)
		std::cout << "Allocation Failed at Brain::Brain()" << std::endl;
	std::cout << "(Brain) Constructor called" << std::endl;
}
Brain::~Brain()
{
	delete [] __ideas;
	std::cout << "(Brain) Disstructor called" << std::endl;
}

Brain::Brain(const Brain & brain)
{
	this->__ideas = new (std::nothrow) std::string[100];
	if (!this->__ideas)
		std::cout << "Allocation Failed at Brain::Brain(const Brain & brain)" << std::endl;
	for (int iterator=0; iterator < 100; iterator++)
		this->__ideas[iterator]  = brain.__ideas[iterator];
	std::cout << "(Brain) Copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain & brain)
{
	for (int iterator=0; iterator < 100; iterator++)
		this->__ideas[iterator]  = brain.__ideas[iterator];
	return (*this);
}

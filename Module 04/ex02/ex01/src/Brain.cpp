#include "../inc/Brain.hpp"

Brain::Brain()
	:__nbideas(0)
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
		std::cout << "Allocation Failed at Brain::Brain(con st Brain & brain)" << std::endl;
	*this = brain;
	std::cout << "(Brain) Copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain & brain)
{
	this->__nbideas = brain.__nbideas;
	for (int iterator=0; iterator < brain.__nbideas; iterator++)
		this->__ideas[iterator] = brain.__ideas[iterator];

	std::cout  << "(Brain) operator overload called" <<  std::endl;
	return (*this);
}

void Brain::set_idea(const std::string &idea) 
{
		__ideas[__nbideas % 100] = idea;
		__nbideas++;
}

void Brain::get_ideas(void) const
{
	for (int i=0; i < __nbideas; i++)
	{
		std::cout << __ideas[i] << std::endl;
	}
}

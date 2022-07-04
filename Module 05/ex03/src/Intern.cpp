#include "../inc/Intern.hpp"

Intern::Intern()
{
	std::cout << GREEN << BOLD << "(Intern)" << NORMAL
        <<  " Default constructor called."  << DEFAULT <<  std::endl;
}

Intern::~Intern()
{
	std::cout << RED << BOLD << "(Intern)" << NORMAL
        <<  " Distructor called."  << DEFAULT <<  std::endl;
}

Intern::Intern(const Intern & intern)
{
	(void) intern;
	std::cout << GREEN << BOLD << "(Intern)" << NORMAL 
		<<  " Copy constructor called."  << DEFAULT <<  std::endl;
}


Intern & Intern::operator=(const Intern & intern)
{
	(void) intern;
	std::cout << GREEN << BOLD << "(Intern)" << NORMAL
        <<  " Copy constructor called."  << DEFAULT <<  std::endl;

	return (*this);
}

const char *Intern::UnkownForm::what() const throw()
{
	return ("Unable to finde a matching form!");
}

int	getIndex(const std::string &form)
{

	std::string forms[4] = {"srubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 4; i++)
	{
		if (forms[i] == form)
			return (i);
	}
	return (-42);

}
Form *Intern::makeForm(const std::string &form_name, const std::string &target)
{
	int index;

	index = getIndex(form_name);
	switch(index)	
	{
		case(0):
			return (new ShrubberyCreationForm(target));
		case(1):
			return(new RobotomyRequestForm(target));
		case(2):
			return (new PresidentialPardonForm(target));
		default:
			std::cout << BOLD << "Form of name \"" << form_name << "\" Does not exist!" << NORMAL <<  std::endl;
			throw(UnkownForm());
			return (NULL);

	}
}

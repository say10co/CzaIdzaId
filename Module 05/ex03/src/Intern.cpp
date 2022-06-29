#include "../inc/Intern.hpp"


Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(const Intern & intern){
	(void) intern;
}


Intern & Intern::operator=(const Intern & intern){
	(void) intern;
	return (*this);
}


Form *Intern::makeForm(const std::string &form_name, const std::string &target)
{
	int index = -42;

	std::string forms[4] = {"srubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 4; i++)
	{
		if (forms[i] == form_name)
		{
			index = i;
			break;
		}
	}
	switch(index)	
	{
		case(0):
			return (new ShrubberyCreationForm(target));
			break;

		case(1):
			return(new RobotomyRequestForm(target));
			break;

		case(2):
			return (new PresidentialPardonForm(target));
			break;

		default:
			std::cout << "Form of name " << form_name << " Does not exist!" << std::endl;
			return (NULL);

	}
}

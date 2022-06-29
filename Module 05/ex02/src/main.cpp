#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

#include <iostream>

int main()
{
	
	try
	{
		ShrubberyCreationForm license("dirver license");
		Bureaucrat	vice("vice", 26);
		Bureaucrat	Minion("Minion", 136);
	
		
		Minion.executeForm(license);
		vice.signForm(license);
		Minion.executeForm(license);


		RobotomyRequestForm robotomy_form;


		Minion.executeForm(robotomy_form);
		vice.signForm(robotomy_form);
		Minion.executeForm(robotomy_form);
		vice.executeForm(robotomy_form);

		PresidentialPardonForm PresidentialFrom;


		vice.executeForm(PresidentialFrom);
		vice.signForm(PresidentialFrom);
		Minion.executeForm(PresidentialFrom);
		vice.executeForm(PresidentialFrom);

		return (0);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

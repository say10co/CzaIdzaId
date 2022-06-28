#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"

#include <iostream>

int main()
{
	
	try
	{
		ShrubberyCreationForm License("dirver license");
		Bureaucrat	vice("vice", 5);
		Bureaucrat	Minion("Minion", 136);
	
		
		License.execute(Minion);
		vice.signForm(License);
		License.execute(Minion);


		RobotomyRequestForm robotomy_form;


		robotomy_form.execute(Minion);
		vice.signForm(robotomy_form);
		robotomy_form.execute(Minion);
		robotomy_form.execute(vice);

	
		return (0);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

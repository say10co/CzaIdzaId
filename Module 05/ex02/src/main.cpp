#include "../inc/ShrubberyCreationForm.hpp"
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
	
		return (0);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

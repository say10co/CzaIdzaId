#include <iostream>
#include "../inc/Form.hpp"


int main()
{
	
	Form 	form;

	try
	{
		Form f("ITFU", -1,  -1, 0);
	}
	catch(const Form::GradeTooHighException &e)
	{
		std::cout << e.getException() << std::endl;
	}
	catch(const Form::GradeTooLowException  &e)
	{
		std::cout << e.getException() << std::endl;
	}
	std::cout << form << std::endl;
	return (0);
}


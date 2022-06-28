#include <iostream>
#include "../inc/Form.hpp"
#include "../inc/GradeException.hpp"
#include "../ex00/inc/Bureaucrat.hpp"


int main() try 
{

	Bureaucrat	remote_service("Joe", 43);
	Form	license("Policy", 50, 100, 0);
	Form 	terms("Agrement", 42, 42, 0);

	std::cout << license << std::endl;
	std::cout << terms << std::endl;

	remote_service.signForm(terms);
	remote_service.incGrade();
	remote_service.signForm(terms);

	return (0);
}
catch(const std::exception &e)
{
	std::cout << e.what() << std::endl;
}


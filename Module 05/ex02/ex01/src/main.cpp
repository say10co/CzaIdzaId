#include <iostream>
#include "../inc/Form.hpp"
#include "../ex00/inc/Bureaucrat.hpp"


int main() try 
{

	Bureaucrat	manager("manager", 43);
	Bureaucrat	councler("councler", 45);

	Form		tax("Elctrecity tax", 50, 100, 0);
	Form 		policy("Terms and servecies", 42, 42, 0);

	councler = manager;

	std::cout << manager << std::endl;
	std::cout << councler << std::endl;
	std::cout << tax << std::endl;
	std::cout << policy << std::endl;

	manager.signForm(tax);
	councler.signForm(tax);

	manager.incGrade();
	councler.decGrade();
	
	manager.signForm(tax);
	councler.signForm(tax);

	return (0);
}
catch(const std::exception &e)
{
	std::cout << e.what() << std::endl;
}


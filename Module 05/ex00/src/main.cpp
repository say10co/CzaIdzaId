#include <iostream>
#include "../Colors.h"
#include "../inc/Bureaucrat.hpp"

int main() try
{
	Bureaucrat leader("CEO", 1);
	Bureaucrat manager("Manager", 4);
	Bureaucrat councler("Councler", 50);
	Bureaucrat new_councler;
	Bureaucrat intern;

	new_councler = councler;

	std::cout << leader << std::endl;
	std::cout << manager << std::endl;
	std::cout << councler << std::endl;
	std::cout << new_councler << std::endl;
	std::cout << intern << std::endl;

	manager.incGrade();
	councler.decGrade();
	leader.incGrade();
	intern.decGrade();
	
	std::cout << leader << std::endl;
	std::cout << manager << std::endl;
	std::cout << councler << std::endl;
	std::cout << intern << std::endl;

	return (0);
}
catch (const std::exception &e)
{
	std::cout << CYAN << e.what() << "!!" << DEFAULT << std::endl;
}

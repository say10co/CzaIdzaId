#include <iostream>
#include "../inc/Bureaucrat.hpp"
#include "../inc/GradeException.hpp"


int main() try
{
	Bureaucrat b_crat("B42", 10);
	Bureaucrat b_intern("Intern", 130);

	b_crat.incGrade();
	std::cout << "Bureaucrat "  << b_crat.getName() << " Pormoted to "<< b_crat.getGrade() << std::endl;
	b_crat.decGrade();
	std::cout << "Bureaucrat " << b_crat.getName() << " Heldback to "<< b_crat.getGrade() << std::endl;

	std::cout << b_intern << std::endl;
	b_intern = b_crat;
	std::cout << b_intern << std::endl;
	return (0);
}
catch (const GradeException &e)
{
	std::cout << e.getException() << std::endl;
}

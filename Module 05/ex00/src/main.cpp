#include <iostream>
#include "../inc/Bureaucrat.hpp"


int main()
{
	Bureaucrat b_crat;
	Bureaucrat b_intern("Intern", 130);

	for (int i = 0; i < 50; i++)
	{
		try
		{
			b_crat.incGrade();
			std::cout << "Bureaucrat Pormoted to "<< b_crat.getGrade() << std::endl;
			//b_crat.decGrade();
			//std::cout << "Bureaucrat Heldback to "<< b_crat.getGrade() << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException  &e)
		{
			std::cout << e.getException() << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException  &e)
		{
			std::cout << e.getException() << std::endl;
		}
	}
	std::cout << b_intern << std::endl;
	b_intern = b_crat;
	//std::cout << "Interns Grad is " << b_intern.getGrade() << std::endl;
	return (0);
}

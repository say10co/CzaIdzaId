#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

#include <iostream>

	



void ShrubberyCreationForm_test()
{
	ShrubberyCreationForm sampleForm;
	Bureaucrat	   	expert("Expert", 14);
	Bureaucrat	   	intermediat("Intermediat", 150);
	
	
	expert.executeForm(sampleForm);
	intermediat.signForm(sampleForm);
	expert.signForm(sampleForm);
	intermediat.executeForm(sampleForm);
	expert.executeForm(sampleForm);

}


void RobotomyRequestForm_test()
{
	RobotomyRequestForm rr_from("robot");
	Bureaucrat	  	manager("Manager", 44);

	manager.executeForm(rr_from);
	manager.signForm(rr_from);
	manager.executeForm(rr_from);
}

void PresidentialPardonForm_test()
{
	PresidentialPardonForm speech("Presidential speech");
	Bureaucrat councler("Councler", 6);

	councler.signForm(speech);
	councler.executeForm(speech);
	councler.incGrade();
	councler.executeForm(speech);

}

int main()
{
	ShrubberyCreationForm_test();	

	std::cout << "--------------------" << std::endl;

	RobotomyRequestForm_test();

	std::cout << "--------------------" << std::endl;

	PresidentialPardonForm_test();

}



#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	:Form("RobotomyRequestForm", __s_grade, __e_grade, 0), __target("target")
{
	std::cout << GREEN << BOLD << "(RobotomyRequestForm)" << NORMAL
        <<  " Default constructor called."  << DEFAULT <<  std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	:Form("RobotomyRequestForm", __s_grade, __e_grade, 0), __target(target)
{
	std::cout << GREEN << BOLD << "(RobotomyRequestForm)" << NORMAL
          <<  " Parameterised constructor called."  << DEFAULT <<  std::endl;

}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << BOLD << "(presidentialpardonform)" << NORMAL
        <<  " distructor called."  << DEFAULT <<  std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &org)
	:Form(org)
{
	std::cout << GREEN << BOLD << "(RobotomyRequestForm)" << NORMAL 
		<<  " Copy constructor called."  << DEFAULT <<  std::endl;
	*this = org;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& org)
{
	(*this).Form::operator=(org);
	this->__target = org.__target;
	
	std::cout << GREEN << BOLD << "(RobotomyRequestForm)" << NORMAL
        <<  " Copy constructor called."  << DEFAULT <<  std::endl;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{
	if (this->isQualefied(executor))
	{
		std::cout << BOLD  << "Making drilling noises !?!?!?!?!?!" << std::endl
		<<  this->__target <<   " has been robotomized successfully 50% of the time"
		<< NORMAL << std::endl;
	}

}


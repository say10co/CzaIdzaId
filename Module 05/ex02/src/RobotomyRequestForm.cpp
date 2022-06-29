

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	:Form("RobotomyRequestForm", __s_grade, __e_grade, 0), __target("Default_target")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	:Form("RobotomyRequestForm", __s_grade, __e_grade, 0), __target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &org)
	:Form(org)
{
	*this = org;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& org)
{
	(*this).Form::operator=(org);
	this->__target = org.__target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{
	if (!this->isSigned())
		throw Form::UnsignedForm();
	if (executor.getGrade() <= __e_grade)
	{
		std::cout << "Making drilling noises !?!?!?!?!?!" << std::endl;
		std::cout <<  this->__target
			<<   "has been robotomized successfully 50% of the time"
			<< std::endl;
	}
	else
		throw GradeTooLowException();

}


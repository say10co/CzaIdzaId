

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	:Form("RobotomyRequestForm", __s_grade, __e_grade, 0)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	:Form(target, __s_grade, __e_grade, 0)
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
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	try
	{
		if (!this->isSigned())
			throw Form::UnsignedForm();
		if (executor.getGrade() <= __e_grade)
		{
			std::cout << "Making drilling noises !?!?!?!?!?!" << std::endl;
			std::cout <<  this->getName()
			<<   "has been robotomized successfully 50% of the time"
			<< std::endl;
		}
		else
			throw GradeTooLowException();
	}
	catch(const std::exception &e)
	{
		std::cout <<  "robotomy failed because " <<  e.what() << std::endl;
	}

}


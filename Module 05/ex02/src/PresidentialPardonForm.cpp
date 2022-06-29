


#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	:Form("PresidentialPardonForm", __s_grade, __e_grade, 0)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	:Form(target, __s_grade, __e_grade, 0)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &org)
	:Form(org)
{
	*this = org;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& org)
{
	(*this).Form::operator=(org);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	try
	{
		if (!this->isSigned())
			throw Form::UnsignedForm();
		if (executor.getGrade() <= __e_grade)
		{
			std::cout <<  this->getName()
			<<   "has been pardoned by Zaphod Beeblebrox"
			<< std::endl;
		}
		else
			throw GradeTooLowException();
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}


#include "../inc/Form.hpp"

Form::Form()
	:__grade_to_execute(__lowest_grade), __grade_to_sign(__lowest_grade),
	__name("From"), _is_signed(0)
{
	std::cout << GREEN << BOLD << "(Form)" << NORMAL 
	<<  " Default constructor called."  << DEFAULT <<  std::endl;

}

Form::~Form()
{
	std::cout << RED << BOLD << "(Form)" << NORMAL 
	<<  " Distructor called."  << DEFAULT <<  std::endl;
}

Form::Form(const Form & form)
	:__grade_to_execute(form.__grade_to_execute),
	__grade_to_sign(form.__grade_to_sign),
	__name(form.__name)
{
	std::cout << GREEN << BOLD << "(Form)" << NORMAL 
		<<  " Copy constructor called."  << DEFAULT <<  std::endl;

	*this = form;
}

Form::Form(const std::string &name ,int s_grade, int e_grade, bool _is_signed)
	:__grade_to_execute(e_grade), __grade_to_sign(s_grade) ,__name(name), _is_signed(_is_signed)
{
	std::cout << GREEN << BOLD << "(Form)" << NORMAL 
		<<  " Parameterised constructor called."  << DEFAULT <<  std::endl;

	if (s_grade > __lowest_grade || s_grade < __hiest_grade)
		throw  Form::GradeTooLowException();
	if (e_grade > __lowest_grade || e_grade <  __hiest_grade)
		throw Form::GradeTooHighException();
}

Form &Form::operator=(const Form & form)
{
	std::cout << GREEN << BOLD << "(Form)" << NORMAL 
	<<  " Copy constructor called."  << DEFAULT <<  std::endl;

	this->_is_signed = form._is_signed;
	return (*this);
}

const std::string &Form::getName(void) const
{
	return (this->__name);
}

int	Form::getGadeToSign() const
{
	return (this->__grade_to_sign);
}

int	Form::getGradeToexecute(void) const
{
	return (this->__grade_to_execute);
}

bool	 Form::isSigned(void) const
{
	return (this->_is_signed);
}

std::ostream	&operator<<(std::ostream &os, const Form &form)
{
	os << MAGENTA 
	<< "Name             :--:> " <<  form.getName() << std::endl
	<< "Grade to sign    :--:> " << form.getGadeToSign() << std::endl
	<< "Grade to execute :--:> " << form.getGradeToexecute() << std::endl
	<< "Is signed        :--:> " << form.isSigned() << std::endl
	   << DEFAULT;
	return (os);
}

const char *Form::GradeTooHighException::what() const throw() 
{
	return ("Grade exceeded highest possible grade");
}

const char *Form::GradeTooLowException::what() const throw() 
{
	return ("Grade exceeded lowest possible grade");
}

const char *Form::UnsignedForm::what() const throw()
{
        return ("Usnigned form can't be executed!");
}

void	Form::beSigned(const Bureaucrat & bureaucrat) 
{
	if (this->__grade_to_sign >= bureaucrat.getGrade())
		this->_is_signed = 1;
	else
		throw GradeTooLowException();
}

void	Form::signForm(const Bureaucrat & bureaucrat)
{
	std::cout << BOLD << bureaucrat.getName() 
	<< " signed " << this->__name << NORMAL << std::endl;
}


bool Form::isQualefied(const Bureaucrat & bureaucrat) const
{
	if (!this->isSigned())
		throw UnsignedForm();
	if (bureaucrat.getGrade() <= __grade_to_execute)
		return (1);
	throw GradeTooLowException();
}

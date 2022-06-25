#include "../inc/Form.hpp"

Form::Form()
	:__grade_to_execute(__lowest_grade), __grade_to_sign(__lowest_grade),
	__name("From"), _is_signed(0)
{
}

Form::~Form()
{
}

Form::Form(const Form & form)
	:__grade_to_execute(form.__grade_to_execute),
	__grade_to_sign(form.__grade_to_sign),
	__name(form.__name), _is_signed(form._is_signed)
{
	*this = form;
}

Form &Form::operator=(const Form & form)
{
	(void) form;
	//this->__name = form.__name;
	//this->__grade_to_execute  = form.__grade_to_execute;
	//this->__grade_to_sign = form.__grade_to_sign;
	//this->___is_signed = form.___is_signed;

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
	os << "Name :--:> " <<  form.getName() << std::endl;
	os << "Grade to sign :->: " << form.getGadeToSign() << std::endl;
	os << "Grade to execute :->: " << form.getGradeToexecute() << std::endl;
	os << "Is signed :->: " << form.isSigned() << std::endl;
	return (os);
}

/* --------------------- Excepion Class --------------- */

Form::Form(const std::string name , const int s_grade,const int e_grade, bool _is_signed)
	:__grade_to_execute(__lowest_grade), __grade_to_sign(__lowest_grade),
	__name(name), _is_signed(_is_signed)
{
	if (s_grade > __lowest_grade )
		throw  Form::GradeTooLowException();
	if ( e_grade < __hiest_grade)
		throw Form::GradeTooHighException();

}

Form::GradeTooHighException::GradeTooHighException()
	:__exception("Exception: Grade exceeded highest possible grade")
{
}

const std::string 	& Form::GradeTooHighException::getException(void) const
{
	return (this->__exception);
}

	// Form::GradeTooLowException

Form::GradeTooLowException::GradeTooLowException()
	:__exception("Exception: Grade exceeded lowest possible grade")
{
}

const std::string 	&Form::GradeTooLowException::getException(void) const
{
	return (this->__exception);
}

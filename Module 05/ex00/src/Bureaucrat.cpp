#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
	:__name("Bureaucrat"), __grade(__lowest_grade)
{

}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string &name, const int  grade)
	:__name(name)
{
	if (__highest_grade > grade)
		throw GradeTooHighException();
	if (__lowest_grade < grade)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat & bureaucrat)
{
	*this = bureaucrat;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & bureaucrat)
{
	this->__grade = bureaucrat.__grade;
	this->__name = bureaucrat.__name;
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return  (this->__name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->__grade);
}

void	Bureaucrat::incGrade(void)
{
	if(__highest_grade > __grade - 1)
		throw GradeTooHighException();
	__grade -= 1;
	// logic for increment 
}

void	Bureaucrat::decGrade()
{
	if (__lowest_grade < __grade + 1)
		throw GradeTooLowException();
	__grade += 1;

}

// Nested classes
	// Bureaucrat::GradeTooHighException

Bureaucrat::GradeTooHighException::GradeTooHighException()
	:__exception("Exception: Grade exceeded highest possible grade")
{
}

const std::string 	& Bureaucrat::GradeTooHighException::getException(void) const
{
	return (this->__exception);
}


	// Bureaucrat::GradeTooLowException

Bureaucrat::GradeTooLowException::GradeTooLowException()
	:__exception("Exception: Grade exceeded lowest possible grade")
{
}


const std::string 	&Bureaucrat::GradeTooLowException::getException(void) const
{
	return (this->__exception);
}

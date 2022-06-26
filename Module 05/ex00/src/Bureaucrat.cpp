/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 08:08:35 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/26 14:50:57 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/GradeException.hpp"
#include "../inc/Bureaucrat.hpp"
#include  <iostream>

Bureaucrat::Bureaucrat()
	:__name("Bureaucrat"), __grade(__lowest_grade)
{

}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string &name, const int  grade)
	//:__name(name)//, __grade(grade)
{
		if (__highest_grade > grade)
			throw GradeTooHighException();
		if (__lowest_grade < grade)
			throw GradeTooLowException();

		this->__grade = grade;
		this->__name = name ;

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

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "."; 
	return (os);
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
}

void	Bureaucrat::decGrade()
{
	if (__lowest_grade < __grade + 1)
		throw GradeTooLowException();
	__grade += 1;

}

/*
Bureaucrat::GradeTooHighException::GradeTooHighException()
	:__exception("Exception: Grade exceeded highest possible grade")
{
}
*/

//const std::string 	& Bureaucrat::GradeTooHighException::getException(void) const
const char *Bureaucrat::GradeTooHighException::what() const throw() 
{
	return ("Exception: Grade exceeded highest possible grade");
}

	// Bureaucrat::GradeTooLowException
/*
Bureaucrat::GradeTooLowException::GradeTooLowException()
	:__exception("Exception: Grade exceeded lowest possible grade")
{
}
*/

//const std::string 	&Bureaucrat::GradeTooLowException::getException(void) const
const char *Bureaucrat::GradeTooLowException::what() const throw() 
{
	return ("Exception: Grade exceeded lowest possible grade");
}

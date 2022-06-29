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

#include "../inc/Bureaucrat.hpp"
#include "../../inc/Form.hpp"
#include "../Colors.h"
#include  <iostream>

Bureaucrat::Bureaucrat()
	:__name("Bureaucrat"), __grade(__lowest_grade)
{
	std::cout << GREEN << BOLD << "(Bureaucrat)" << NORMAL 
	<<  " Default constructor called."  << DEFAULT <<  std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << BOLD << "(Bureaucrat)" << NORMAL 
	<<  " Distructor called."  << DEFAULT <<  std::endl;

}

Bureaucrat::Bureaucrat(const std::string &name, const int  grade)
	:__name(name)
{
	std::cout << GREEN << BOLD << "(Bureaucrat)" << NORMAL 
		<<  " Parameterised constructor called."  << DEFAULT <<  std::endl;

		if (__highest_grade > grade)
			throw GradeTooHighException();
		if (__lowest_grade < grade)
			throw GradeTooLowException();

		this->__grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & bureaucrat)
	:__name(bureaucrat.__name)
{
	std::cout << GREEN << BOLD << "(Bureaucrat)" << NORMAL 
	<<  " Copy constructor called."  << DEFAULT <<  std::endl;

	*this = bureaucrat;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & bureaucrat)
{
	std::cout << GREEN << BOLD << "(Bureaucrat)" << NORMAL 
	<<  " Operator overload  called."  << DEFAULT <<  std::endl;

	this->__grade = bureaucrat.__grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << BOLD << bureaucrat.getName() << ", bureaucrat grade "
	<< bureaucrat.getGrade() << "." << NORMAL; 
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
	std::cout << YELLOW << __name << " Has been promoted to Grade:" 
	<< __grade << DEFAULT << std::endl; 
}

void	Bureaucrat::decGrade()
{
	if (__lowest_grade < __grade + 1)
		throw GradeTooLowException();
	
	__grade += 1;
	std::cout << YELLOW << __name << " Has been HeldBack  to Grade:" 
	<< __grade  << DEFAULT << std::endl; 
}

const char *Bureaucrat::GradeTooHighException::what() const throw() 
{
	return ("Exception: Grade exceeded highest possible grade");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() 
{
	return ("Exception: Grade exceeded lowest possible grade");
}

void    Bureaucrat::signForm(Form &form)
{
	try
	{	
		form.beSigned(*this);
		std::cout << BOLD << this->__name << " signed " 
		<< form.getName() <<  NORMAL << std::endl;
        }
        catch(const std::exception &e)
        {
                std::cout << BOLD << this->__name  << " couldn't sign  "
			<< form.getName() << " because " << e.what() << NORMAL << std::endl;
        }
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception &e)
	{
		std::cout << CYAN << "Execution of " << form.getName()
			<< " Failed because " << e.what() << DEFAULT << std::endl;
	}

}


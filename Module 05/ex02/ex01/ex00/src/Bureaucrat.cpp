/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:25:00 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/29 12:46:31 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 08:08:35 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/28 12:13:47 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/GradeException.hpp"
#include "../inc/Bureaucrat.hpp"
#include  <iostream>
#include "../../inc/Form.hpp"

Bureaucrat::Bureaucrat()
	:__name("Bureaucrat"), __grade(__lowest_grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string &name, const int  grade)
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
	std::cout << "Bureaucrat " << this->__name << " Got promoted to G:" << this->__grade << std::endl;
}

void	Bureaucrat::decGrade()
{
	if (__lowest_grade < __grade + 1)
		throw GradeTooLowException();
	__grade += 1;

}

const char *Bureaucrat::GradeTooHighException::what() const throw() 
{
	return ("Exception: Grade exceeded highest possible grade");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() 
{
	return ("Exception: Grade exceeded lowest possible grade");
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);	
		std::cout << this->__name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << this->__name  << " couldn't sign  " 
			<< form.getName() << " because " << e.what() << std::endl;
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
		std::cout << "Execution of " << form.getName()
			<< " Failed because " << e.what() << std::endl;
	}

}


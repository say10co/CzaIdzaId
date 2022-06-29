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
#include "../inc/Colors.h"
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

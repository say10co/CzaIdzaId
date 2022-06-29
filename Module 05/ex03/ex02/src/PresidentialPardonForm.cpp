/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:23:01 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/29 13:20:04 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	:Form("PresidentialPardonForm", __s_grade, __e_grade, 0), __target("target")
{
	std::cout << GREEN << BOLD << "(PresidentialPardonForm)" << NORMAL
        <<  " Default constructor called."  << DEFAULT <<  std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	:Form("PresidentialPardonForm", __s_grade, __e_grade, 0), __target(target)
{
	 std::cout << GREEN << BOLD << "(PresidentialPardonForm)" << NORMAL
          <<  " Parameterised constructor called."  << DEFAULT <<  std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED << BOLD << "(PresidentialPardonForm)" << NORMAL
        <<  " Distructor called."  << DEFAULT <<  std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &org)
	:Form(org)
{
 	std::cout << GREEN << BOLD << "(PresidentialPardonForm)" << NORMAL 
		<<  " Copy constructor called."  << DEFAULT <<  std::endl;
	*this = org;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& org)
{
	(*this).Form::operator=(org);
	this->__target = org.__target;

	std::cout << GREEN << BOLD << "(PresidentialPardonForm)" << NORMAL
        <<  " Copy constructor called."  << DEFAULT <<  std::endl;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{

	if (this->isQualefied(executor))
	{
		std::cout << BOLD <<  this->__target 
		<<   " has been pardoned by Zaphod Beeblebrox" << NORMAL << std::endl;
	}
}
const std::string &PresidentialPardonForm::getTarget(void) const
{
	return (this->__target);
}

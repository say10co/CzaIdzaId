/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:23:01 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/29 12:26:43 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




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

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
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


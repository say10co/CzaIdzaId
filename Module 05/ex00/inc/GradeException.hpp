/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeException.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 08:35:06 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/26 14:50:23 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADEEXCEPTION_HPP
# define GRADEEXCEPTION_HPP 

#include <stdexcept>
#include "Bureaucrat.hpp"

class GradeException : public std::exception
{
	public:
		virtual const char * what() const throw() =  0;
};

class Bureaucrat::GradeTooHighException : public GradeException
{

	public:
		const char * what() const throw();
};

class Bureaucrat::GradeTooLowException : public GradeException
{
	public:
		const char * what() const throw();
};


#endif /* GRADEEXCEPTION_HPP */

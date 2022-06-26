/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeException.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 08:35:06 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/26 08:35:48 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADEEXCEPTION_HPP
# define GRADEEXCEPTION_HPP 

class GradeException
{
	public:
		virtual const std::string &getException(void) const =  0;
};

class Bureaucrat::GradeTooHighException : public GradeException
{
	private:
		const std::string __exception;

	public:
		GradeTooHighException();
		const std::string &getException(void) const;
};

class Bureaucrat::GradeTooLowException : public GradeException
{
	private:
		const std::string __exception;
	public:
		GradeTooLowException();
		const std::string &getException(void) const;
};


#endif /* GRADEEXCEPTION_HPP */

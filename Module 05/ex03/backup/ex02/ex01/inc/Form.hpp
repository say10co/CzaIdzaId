/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:30:06 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/29 12:28:24 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP 

#include <iostream>
#include "../ex00/inc/Bureaucrat.hpp"

class Form
{
	private:

		const int			__grade_to_execute;
		const int			__grade_to_sign;
		const std::string		__name;
		bool			 	_is_signed; 

		static const int			__hiest_grade = 1;
		static const int 			__lowest_grade = 150;

	public:
		Form();
		~Form();
		Form(const Form &form);
		Form(const std::string &name ,int s_grade ,int e_grade, bool is_signed);
		Form &operator=(const Form & form);

	 
		virtual void execute(Bureaucrat const & executor) const = 0;
		virtual const std::string &getTarget(void) const = 0;

		const std::string &		getName() const;
		int				getGradeToexecute(void) const;
		int    				getGadeToSign() const;
		bool				isSigned(void) const;

		void				beSigned(const Bureaucrat &bureaucrat);
		void				signForm(const Bureaucrat &bureaucrat);
		
		class GradeTooHighException : public std::exception 
		{
			public:
			const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
			const char * what() const throw();
		};
		class UnsignedForm : public std::exception 
		{
			public:
			const char * what() const throw();
		};


};

std::ostream &operator<<(std::ostream &os,  const Form &form);

#endif /* FORM_HPP */

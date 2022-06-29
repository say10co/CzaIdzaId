/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:30:06 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/28 12:10:56 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP 

#include "../ex00/inc/Bureaucrat.hpp"
#include "../ex00/Colors.h"
#include <iostream>

class Form
{
	private:

		const int			__grade_to_execute;
		const int			__grade_to_sign;
		const std::string	__name;
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
		bool 	isQualefied(const Bureaucrat & bureaucrat) const;

		const std::string	&getName(void) const;
		int			getGadeToSign(void) const;
		int			getGradeToexecute(void) const;
		bool			isSigned(void) const;

		void			beSigned(const Bureaucrat &bureaucrat);
		void			signForm(const Bureaucrat &bureaucrat);

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

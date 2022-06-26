/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:30:06 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/26 18:43:49 by adriouic         ###   ########.fr       */
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
		const std::string	__name;
		bool			 	_is_signed; 

		static const int			__hiest_grade = 1;
		static const int 			__lowest_grade = 150;

	public:
		Form();
		~Form();
		Form(const Form &form);
		Form(const std::string name , const int s_grade
				,const int e_grade, bool is_signed);
		Form &operator=(const Form & form);


		const std::string	&getName(void) const;
		int					getGadeToSign(void) const;
		int					getGradeToexecute(void) const;
		bool				isSigned(void) const;

		void				beSigned(const Bureaucrat &bureaucrat);
		void				signForm(const Bureaucrat &bureaucrat);

		class GradeTooHighException;
		class GradeTooLowException;
		
};

std::ostream &operator<<(std::ostream &os,  const Form &form);

#endif /* FORM_HPP */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP 

#include <fstream>

class Form;

class Bureaucrat
{
	private:
		const std::string	__name;
		int			__grade;

		static const int __lowest_grade = 150;
		static const int __highest_grade = 1;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const std::string &name, const int graade);
		Bureaucrat(const Bureaucrat & bureaucrat);
		Bureaucrat &operator=(const Bureaucrat & bureaucrat);
		
		void executeForm(Form const & form);

		void				incGrade(void);
		void				decGrade(void);
		std::string	getName(void) const;
		int			getGrade(void) const;
		void    signForm(Form & form);

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
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif /* BUREAUCRAT_HPP */

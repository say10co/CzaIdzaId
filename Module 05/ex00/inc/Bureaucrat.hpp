#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP 

#include  <iostream>

class Bureaucrat
{
	private:
		std::string	__name;
		int					__grade;

		static const int __lowest_grade = 150;
		static const int __highest_grade = 1;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const std::string &name, const int graade);
		Bureaucrat(const Bureaucrat & bureaucrat);
		Bureaucrat &operator=(const Bureaucrat & bureaucrat);

		void				incGrade(void);
		void				decGrade(void);
		std::string	getName(void) const;
		int			getGrade(void) const;

		class GradeTooHighException
		{
			private:
				const std::string __exception;

			public:
				GradeTooHighException();
				const std::string &getException(void) const;
			public:
		};

		class GradeTooLowException
		{
			private:
				const std::string __exception;
			public:
				GradeTooLowException();
				const std::string &getException(void) const;
		};

};


#endif /* BUREAUCRAT_HPP */

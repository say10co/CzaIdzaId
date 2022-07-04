#ifndef INTERN_HPP
# define INTERN_HPP 

#include "../ex02/ex01/inc/Form.hpp"
#include "../ex02/inc/PresidentialPardonForm.hpp"
#include "../ex02/inc/RobotomyRequestForm.hpp"
#include "../ex02/inc/ShrubberyCreationForm.hpp"


class Intern
{
	public:

		Intern();
		~Intern();
		Intern(const Intern & intern);
		Intern &operator=(const Intern & intern);
		Form *makeForm(const std::string &form_name, const std::string &target);

		class UnkownForm: public std::exception
		{
			const char *what() const throw();
		};
};

#endif /* INTERN_HPP */

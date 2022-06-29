#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP 

#include "../ex01/inc/Form.hpp"

class PresidentialPardonForm :public  Form
{
	private:
		std::string 	 __fileName;
		static const int	__e_grade = 5;
		static const int 	__s_grade = 25;

		void	writeTreeiTofile(void);

	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &org);
		PresidentialPardonForm &operator=(const  PresidentialPardonForm & org);
		PresidentialPardonForm(const std::string &target);


		void execute(Bureaucrat const & executor) const;
};

#endif /* PRESIDENTIALPARDONFORM_HPP */

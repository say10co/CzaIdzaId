#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP 

#include "../ex01/inc/Form.hpp"
#include <ofstream>

class ShrubberyCreationForm :public  Form
{
	private:
		std::string 	 __fileName;
		std::ofstream	&__out_file;
		static const int	__e_grade = 137;
		static const int 	__s_grade = 145;

		void	writeTreeiTofile(void);

	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &org);
		ShrubberyCreationForm &operator=(cont  ShrubberyCreationForm & org);
		ShrubberyCreationForm(const std::string &target);

		// absstract functuin declaration 	
}

#endif /* SHRUBBERYCREATIONFORM_HPP */

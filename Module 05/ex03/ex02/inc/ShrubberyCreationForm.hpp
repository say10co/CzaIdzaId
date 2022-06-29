#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP 

#include "../ex01/inc/Form.hpp"
#include <fstream>

class ShrubberyCreationForm :public  Form
{
	private:
		std::string 	 __fileName;
		std::ofstream	__out_file;
		std::string 	__target;
		static const int	__e_grade = 137;
		static const int 	__s_grade = 145;


	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &org);
		ShrubberyCreationForm &operator=(const  ShrubberyCreationForm & org);
		ShrubberyCreationForm(const std::string &target);


		void execute(Bureaucrat const & executor) const;
		const std::string &getTarget(void) const;

};

#endif /* SHRUBBERYCREATIONFORM_HPP */

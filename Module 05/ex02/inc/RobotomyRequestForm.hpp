#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "../ex01/inc/Form.hpp"

class RobotomyRequestForm :public  Form
{
	private:
		std::string 	 __fileName;
		std::ofstream	__out_file;
		static const int	__e_grade = 72;
		static const int 	__s_grade = 45;

		void	writeTreeiTofile(void);

	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &org);
		RobotomyRequestForm &operator=(const  RobotomyRequestForm & org);
		RobotomyRequestForm(const std::string &target);


		void execute(Bureaucrat const & executor);
};

#endif /* ROBOTOMYREQUESTFORM_HPP */

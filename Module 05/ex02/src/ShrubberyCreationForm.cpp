
#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	:Form("ShrubberyForm", __s_grade, __e_grade, 0), __fileName("Default_shrubbery")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	:Form(target, __s_grade, __e_grade, 0), __fileName(target + "_shrubbery")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &org)
	:Form(org)
{
	*this = org;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& org)
{
	(*this).Form::operator=(org);
	this->__fileName = org.__fileName;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	try
	{
		if (!this->isSigned())
			throw Form::UnsignedForm();
		if (executor.getGrade() <= __e_grade)
		{
			__out_file.open(this->__fileName , std::ofstream::out);
			writeTreeiTofile();
			__out_file.close();
			std::cout << executor.getName() << " executed " << this->getName() << std::endl;
		}
		else
			throw GradeTooLowException();
	}
	catch(const std::exception &e)
	{
		std::cout <<  e.what() << std::endl;
	}

}

void ShrubberyCreationForm::writeTreeiTofile(void)
{

	std::ofstream &of = this->__out_file;
	of	<<	 "                                                        ."	
			<<	"                                              .         ; 			\n" 	
			<<	"                 .              .              ;%     ;;   		\n"	
			<<	"                   ,           ,                :;%  %;   			\n"	
			<<	"                    :         ;                   :;%;'     .,   	\n"	
			<<	"           ,.        %;     %;            ;        %;'    ,;		\n"	
			<<	"             ;       ;%;  %%;        ,     %;    ;%;    ,%'		\n"	
			<<	"              %;       %;%;      ,  ;       %;  ;%;   ,%;' 		\n"	
			<<	"               ;%;      %;        ;%;        % ;%;  ,%;'			\n"	
			<<	"                `%;.     ;%;     %;'         `;%%;.%;'				\n"	
			<<	"                 `:;%.    ;%%. %@;        %; ;@%;%'				\n"	
			<<	"                    `:%;.  :;bd%;          %;@%;'					\n"				
			<<	"                      `@%:.  :;%.         ;@@%;'   				\n"	
			<<	"                        `@%.  `;@%.      ;@@%;         			\n"		
			<<	"                          `@%%. `@%%    ;@@%;        				\n"	
			<<	"                            ;@%. :@%%  %@@%;      					\n"			 
			<<	"                              %@bd%%%bd%%:;     					\n"							
			<<	"                                #@%%%%%:;;							\n"	
			<<	"                                %@@%%%::;							\n"		
			<<	"                                %@@@%(o);  . '       			 	\n"					 
			<<	"                                %@@@o%;:(.,'         				\n"	
			<<	"                            `.. %@@@o%::;         					\n"	
			<<	"                               `)@@@o%::;         					\n"	
			<<	"                                %@@(o)::;        					\n"	
			<<	"                               .%@@@@%::;         					\n"	
			<<	"                               ;%@@@@%::;.          				\n"	
			<<	"                              ;%@@@@%%:;;;. 						\n"		
			<<	"                          ...;%@@@@@%%:;;;;,.. 		 			\n"		
			<< std::endl;

	
}

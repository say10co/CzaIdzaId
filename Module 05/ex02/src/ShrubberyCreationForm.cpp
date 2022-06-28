#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	__fileName("Default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	:__fileName(target + "_shrubbery")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &org)
{

}

ShrubberyCreationForm &operator=(const ShrubberyCreationForm& org)
{
	return (*this);
}

ShrubberyCreationFor::execute(Bureaucrat const & executor)
{
	try
	{
		this->__out_file = open(this->__fileName , std::ofstream::out);
		writeTreeiTofile();
	}
	catch(const std::execeptions &e)
	{
		std::cout <<  e.what() << std::endl;
	}

}

void ShrubberyCreationFor::writeTreeiTofile(void)
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

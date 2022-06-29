/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:30:31 by adriouic          #+#    #+#             */
/*   Updated: 2022/06/29 13:07:51 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/ShrubberyCreationForm.hpp"


void writeTreeiTofile(std::ofstream &out_file);

ShrubberyCreationForm::ShrubberyCreationForm()
	:Form("ShrubberyCreationForm", __s_grade, __e_grade, 0),
       	__fileName("Default_shrubbery"), __target("Default")
{
	std::cout << GREEN << BOLD << "(ShrubberyCreationForm)" << NORMAL
        <<  " Default constructor called."  << DEFAULT <<  std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	:Form("ShrubberyCreationForm", __s_grade, __e_grade, 0),
	__fileName(target + "_shrubbery"), __target(target)
{
       	std::cout << GREEN << BOLD << "(ShrubberyCreationForm)" << NORMAL
          <<  " Parameterised constructor called."  << DEFAULT <<  std::endl;

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << RED << BOLD << "(ShrubberyCreationForm)" << NORMAL
        <<  " Distructor called."  << DEFAULT <<  std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &org)
	:Form(org)
{
	std::cout << GREEN << BOLD << "(ShrubberyCreationForm)" << NORMAL 
		<<  " Copy constructor called."  << DEFAULT <<  std::endl;

	*this = org;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& org)
{
	(*this).Form::operator=(org);
	this->__fileName = org.__fileName;

	std::cout << GREEN << BOLD << "(ShrubberyCreationForm)" << NORMAL
        <<  " Copy constructor called."  << DEFAULT <<  std::endl;

	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	out_file;

	if (this->isQualefied(executor))
	{
		out_file.open(this->__fileName , std::ofstream::out);
		writeTreeiTofile(out_file);
		out_file.close();
	}
}

void writeTreeiTofile(std::ofstream &out_file)
{

	out_file <<	 "                                                        ."	
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

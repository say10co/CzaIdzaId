#ifndef REPLACECLASS_HPP
# define REPLACECLASS_HPP 
#include <iostream>
#include <fstream>

class	file
{
	private:
		std::string	_file_name;
		std::string	_string;
		std::string	_replacment;
		std::ifstream	_base_file;
		std::ofstream	_new_file;

	public:
		file(char **argv);
		~file();
		std::string	get_file_name(void);
		std::string 	get_string(void);
		std::string	get_replacment(void);
		bool		__error;
		void		replaceInLine(std::string& line_);
		void		write_line(std::string& line_);
		bool		get_line(std::string	&line);
};

#endif /* REPLACECLASS_HPP */

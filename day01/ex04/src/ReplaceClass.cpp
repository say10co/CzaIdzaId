#include "../inc/ReplaceClass.hpp"
#include <string>

file::~file()
{
}

file::file(char **argv)
{
	__error = false;
	_file_name.append(argv[1]);
	_string.append(argv[2]);
	_replacment.append(argv[3]);
	_base_file.open(_file_name, std::ios::in);
	_new_file.open(_file_name +  ".replace", std::ios::out);

	if (!_base_file.is_open() || !_new_file.is_open())
        {
		std::cout << "can't open file!!" << std::endl;
		__error = true;
	}
}

void	file::write_line(std::string& line_)
{
	_new_file << line_;
}

void	file::replaceInLine(std::string& line_)
{	
	size_t	pos;

	pos = line_.find(this->_string);
	while (pos != std::string::npos)
	{
		line_.erase(pos, this->_string.length());
		line_.insert(pos, this->_replacment);
		pos += this->_replacment.length();
		pos = line_.find(this->_string, pos);
	}
}

bool	file::get_line(std::string	&line)
{
	std::string	tmp;

	while (std::getline(_base_file, tmp))
	{
		if (!_base_file.eof())
			tmp.append("\n");
		line.append(tmp);
		
	}
	return (1);
}

std::string	file::get_file_name(void)
{
	return (this->_file_name);
}
std::string	file::get_string(void)
{
	return (this->_string);
}
std::string	file::get_replacment(void)
{
	return (this->_replacment);
}

#include <string>
#include "../inc/ReplaceClass.hpp"

int main(int	ac, char **argv)
{
	if (ac != 4)
		return (1);

	file		file_rep ( argv );
	std::string	line;

	if (file_rep.__error)
		return (2);
	file_rep.get_line(line);
	file_rep.replaceInLine(line);	
	file_rep.write_line(line);
	return (0);
}

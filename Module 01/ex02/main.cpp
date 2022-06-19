#include <iostream>

int main(void)
{
	std::string	string;
	std::string	*stringPTR;

	string		= "HI THIS IS BRAIN";
	stringPTR	= &string;
	std::string 	&stringREF = string;

	std::cout << &string << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << string << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

}

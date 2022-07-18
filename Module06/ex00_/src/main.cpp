#include <iostream>
#include <iomanip>
#include "../inc/Colors.h"

#define USAGE "./convert [scalar type]"
#define NON_SCALAR "Imposibble Conversion!! :("

void form_output(const char *prefix, const char *sufix, const char *color)
{
	std::cout << MAGENTA << prefix<< " : " << DEFAULT << color << sufix <<  DEFAULT << std::endl;
}

bool is_convertable(const char *str)
{
	(void) str;
	return (true);
}

void display_conversion(const char *str)
{
	double double_val;

	double_val = std::stod(str);
	if (double_val < std::numeric_limits<char>::min())
		form_output("char", "Underflow", CYAN);
	else if (double_val > std::numeric_limits<char>::max())
		form_output("char", "Overflow", CYAN);
	else if (!std::isprint(double_val))
		form_output("char", "Non Displayable", YELLOW);
	else
		std::cout << MAGENTA << "char : " << DEFAULT 
			<< static_cast<char>(double_val) << std::endl;	
	
	if (double_val < std::numeric_limits<int>::min())
		form_output("int", "Underflow", CYAN);
	else if (double_val > std::numeric_limits<int>::max())
		form_output("int", "Overflow", CYAN);
	else
		std::cout << MAGENTA << "int : " << DEFAULT 
			<< static_cast<int>(double_val) << std::endl;	

	if (double_val < std::numeric_limits<float>::lowest())
		form_output("float", "Underflow", CYAN);
	else if (double_val > std::numeric_limits<float>::max())
		form_output("float", "Overflow", CYAN);
	else
	{
		if (double_val / 1 == static_cast<int>(double_val))
			std::cout  << std::setprecision(1) << std::fixed;
		std::cout << MAGENTA << "float : " << DEFAULT 
			<< static_cast<float>(double_val) << "f" << std::endl;	
	}
	std::cout << MAGENTA << "double : " << DEFAULT 
			<< double_val << "f" << std::endl;
}

int main(int ac, char **av)
{
	std::cout << std::numeric_limits<float>::min() << std::endl;
	if (ac != 2)
	{
		std::cout << RED << USAGE << DEFAULT << std::endl;
		return (2);
	}
	if (is_convertable(av[1]))
	{
		try
		{
			display_conversion(av[1]);
			return (0);
		}
		catch(const std::exception &e)
		{
			std::cout << RED << NON_SCALAR << DEFAULT << std::endl; 
		}
	}
	return (1);
}

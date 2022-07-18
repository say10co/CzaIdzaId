#include <iostream>
#include <iomanip>
#include <string.h>
#include <limits>
#include "../inc/ScalarTypes.hpp"
#include "../Colors.h"
bool is_convertable(const char *str)
{
	(void)	str;
	return true;
}

ScalarTypes::ScalarTypes()
	:int_val(0), char_val(0), float_val(0), double_val(0)
{
}

ScalarTypes::~ScalarTypes()
{
}

ScalarTypes::ScalarTypes(const char *str)
	:int_val(-1), char_val(-1), float_val(-1), double_val(-1)
{
	double_val = std::stod(str);
	std::cout << "Double value "<< double_val << std::endl;
	if (double_val <= std::numeric_limits<char>::max())
		char_val = static_cast<char>(double_val);
	if (double_val <= std::numeric_limits<int>::max())
		int_val = static_cast<int>(double_val);
	if (double_val <= std::numeric_limits<float>::max())
		float_val = static_cast<float>(double_val);
}

ScalarTypes::ScalarTypes(const ScalarTypes& scalartype)
{
	*this = scalartype;
}

ScalarTypes& ScalarTypes::operator=(const ScalarTypes & scalartype)
{
	this->int_val = scalartype.int_val;
	this->char_val = scalartype.char_val;
	this->float_val = scalartype.float_val;
	this->double_val = scalartype.double_val;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const ScalarTypes& scalartype)
{
	{
		if (scalartype.char_val == -1)
			os << MAGENTA <<  "char: " << DEFAULT << CYAN << "Overflow!!"<< DEFAULT << std::endl;
		else if (! std::isprint(scalartype.char_val))
			os << MAGENTA << "char: " << DEFAULT << YELLOW  <<  "Non displayable1!!" << DEFAULT << std::endl;	
		else
			os << MAGENTA << "char: "<< DEFAULT  << scalartype.char_val << std::endl;
	}

	{
		if (scalartype.int_val != -1)
			os << MAGENTA << "int: " << DEFAULT << scalartype.int_val << std::endl;
		else
			os << MAGENTA << "int: " << DEFAULT << CYAN << "Overflow!!" << DEFAULT << std::endl;
	}
	{
		os << std::setprecision(1) << std::fixed; // indepth deatails needed
		if (scalartype.float_val != -1)
			os << MAGENTA << "float: " << DEFAULT << scalartype.float_val << "f" << std::endl;
		else
			os << MAGENTA << "float: " << DEFAULT << CYAN  << "Overflow!!" << DEFAULT<< std::endl;
	}
	os << MAGENTA << "double: " << DEFAULT << scalartype.double_val <<  DEFAULT <<std::endl;
	return (os);
}


bool show_usage(void)
{
	std::cout << "./convert [Scalar Type]" << std::endl;
	return (0);
}

int main(int ac,  char **av)
{
	if (ac != 2)
		return (show_usage());
	try
	{
		ScalarTypes types(av[1]);
		std::cout  << types << std::endl;
	}
	catch(const std::invalid_argument &e)
	{
		std::cout << RED <<  "Imposibble Conversion!! :(" << std::endl; 
	}
	return (0);
}

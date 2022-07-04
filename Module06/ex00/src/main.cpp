#include <iostream>
#include <iomanip>
#include <string.h>
#include <limits>

class ScalarTypes
{
			
	public:
		int	int_val;
		char	char_val;
		float	float_val;
		double	double_val;

		ScalarTypes();
		~ScalarTypes();
		ScalarTypes(const char *str);
		ScalarTypes(const ScalarTypes & scalartype);
		ScalarTypes &operator=(const ScalarTypes & scalartype);

};

std::ostream &operator<<(std::ostream &os, const ScalarTypes & scalartype);


ScalarTypes::ScalarTypes()
	:int_val(0), char_val(0), float_val(0), double_val(0)
{

}

ScalarTypes::~ScalarTypes()
{
}

ScalarTypes::ScalarTypes(const char *str)
{
	double_val = std::stod(str);
	int_val = static_cast<int>(double_val);
	char_val = static_cast<char>(double_val);
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
	if (! std::isprint(scalartype.char_val))
		os << "char: "<< "Non displayable" << std::endl;
	else
		os << "char: " << scalartype.char_val << std::endl;
	os << "int: " << scalartype.int_val << std::endl;

	if (scalartype.double_val / 1 == static_cast<int>(scalartype.double_val))
		os << std::setprecision(1) << std::fixed;
	os << "float: " << scalartype.float_val << "f" << std::endl;
	os << "double: " <<  scalartype.double_val << std::endl;
	return (os);
}


int main(int ac,  char **av)
{
	if (ac != 2)
		return (1);
	try
	{
		ScalarTypes types(av[1]);
		std::cout  << types << std::endl;
	}
	catch(const std::invalid_argument &e)
	{
		std::cout << "Invalid Argument!!" << std::endl;
	}
	return (0);
}

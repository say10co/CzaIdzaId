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
	:int_val(-1), char_val(-1), float_val(-1), double_val(-1)
{
	double_val = std::stod(str);
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
	if (scalartype.char_val == -1)
		os << "char: " << "Overflow!!"<< std::endl;
	else if (! std::isprint(scalartype.char_val))
		os << "char: "<< "Non displayable1!!" << std::endl;	
	else
		os << "char: " << scalartype.char_val << std::endl;

	if (scalartype.int_val != -1)
		os << "int: " << scalartype.int_val << std::endl;
	else
		os << "int: " << "Overflow!!"<< std::endl;

	//if (scalartype.double_val / 1 == static_cast<int>(scalartype.double_val))
		os << std::setprecision(1) << std::fixed;

	if (scalartype.float_val != -1)
		os << "float: " << scalartype.float_val << "f" << std::endl;
	else
		os << "float: " << "Overflow!!"<< std::endl;

	os << "double: " <<  scalartype.double_val << std::endl;
	return (os);
}


bool show_usage(void)
{
	std::cout << "./convert [Scalar Type]" << std::endl;
	return (0);
}

int main(int ac,  char **av)
{
	std::cout << std::numeric_limits<double>::max() << " " <<  sizeof(double)<< std::endl;
	if (ac != 2)
		return (show_usage());
	try
	{
		ScalarTypes types(av[1]);
		std::cout  << types << std::endl;
	}
	catch(const std::invalid_argument &e)
	{
		std::cout << "Invalid Argument!!"; 
	}
	return (0);
}

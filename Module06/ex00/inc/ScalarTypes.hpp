#ifndef SCALARTYPES_HPP
# define SCALARTYPES_HPP 

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
#endif /* SCALARTYPES_HPP */

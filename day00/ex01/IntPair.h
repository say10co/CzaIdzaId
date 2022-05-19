#ifndef INTPAIR_H
# define INTPAIR_H

# include <iostream>

class IntPair
{
public:
	int	m_num1;
	int	m_num2;

	void	set(const int	n1, const int n2)
	{
		m_num1 = n1 ;
		m_num2 = n2;
	}
	void	print(void)
	{
		std::cout << "Pair(" << m_num1 << ", " << m_num2 << ")\n";
	}

};

#endif

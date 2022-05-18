#ifndef stack_h
# define stack_h
# include <iostream>

class Stack
{
	using constint_t = const int;

	int	m_stack[10];
	int	m_stack_size {0};

	public:
	void	reset()
	{
		m_stack_size = 0;
	}
	bool push(constint_t n)
	{
		if (m_stack_size == 10)
			return (false);
		m_stack[m_stack_size++] = n;
		return (true);
	}
	bool	pop()
	{
		if (m_stack_size)
			return (m_stack[m_stack_size--]);
		return (false);
	}
	void	print()
	{
		std::cout << "( ";

		for (int i = 0; i < m_stack_size; i++)
		{
			std::cout << m_stack[i];
			std::cout << " ";
		}
		std::cout << ")\n";
	}

};

#endif

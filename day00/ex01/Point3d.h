#ifndef POINT3D_H
# define POINT3D_H

# include <iostream>

class Point3d
{
	using constint_t = const int;
	int	m_x;
	int	m_y;
	int	m_z;
public:
	void	setValues(constint_t x, constint_t y, constint_t z)
	{
		m_x = x;
		m_y = y;
		m_z = z;
	}
	void	print(void)
	{
		std::cout << "<" << m_x << ", " << m_y	<< ", " << m_z << ">";
	}
	bool isEqual(class Point3d& point)
	{
		if (m_x == point.m_x && m_y == point.m_y && m_z == point.m_z)
			return (1);
		return (0);
	}
};

#endif

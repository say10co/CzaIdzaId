#include <iostream>
#include "FixedPoint/inc/Fixed.hpp"
#include "inc/Point.hpp"


int main(void)
{
	Point const a(3.0f, 2.0f);
	Point const b(6.0f, 2.0f);
	Point const c(10.0f, 6.0f);
//	Point const p(5.0f, 6.0f);
	Point const p(a);

	std::cout << bsp(a, b, c, p) << std::endl;

}

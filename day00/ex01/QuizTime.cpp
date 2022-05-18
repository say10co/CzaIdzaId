#include "IntPair.h"

int main(void)
{
	IntPair pair;
	IntPair pair1 {1, 1};

	pair.set(42, 1337);
	std::cout << pair.m_num1;

	pair.print();
	pair1.print();
	
}

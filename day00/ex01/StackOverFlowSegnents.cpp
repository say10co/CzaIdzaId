#include <iostream>
#include <unistd.h>

int	main(void);

void	foo()
{
	std::cout << "in foo\n";
	main();
}

int main(void)
{
	int	G[2000000];
	std::cout << "in main\n";
	foo();
}

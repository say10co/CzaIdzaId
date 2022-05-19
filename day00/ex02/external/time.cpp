#include <ctime>
#include <iostream>


int main(int ac,  char	**av)
{
	(void)ac;
	(void)av;

	std::time_t t;
	std::time(&t);
	std::tm *now = std::localtime(&t);
	
	std::cout << now->tm_year + 1900 << now->tm_mon << now->tm_mday
	<< "_" << now->tm_hour << now->tm_min << now->tm_sec << std::endl;
	return (0);
}


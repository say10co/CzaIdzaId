#include "phonebook.hpp"


int main(int ac,  char	**av)
{
	(void)ac;
	(void)av;

	PhoneBook book;
	std::string tmp;

	while (true)
	{
		std::cout << "PhoneBook$: ";
		std::getline(std::cin, tmp);
		if (std::cin.fail())
		{
			std::cout << "Invalid entry !! Quitting...\n";
			book.exit();
		}
		if (!tmp.compare("ADD"))
			book.add();
		else if (!tmp.compare("SEARCH"))
			book.search();
		else if (!tmp.compare("EXIT"))
			book.exit();
		else
			std::cout << "Invalid Command\n";
	}
	return (0);
}

#include "phonebook.hpp"





std::string PhoneBook::truncate(std::string s, size_t len)
{
	if (s.length() > len)
		return (s.substr(0, len) + ".");
	return (s);
}

bool	check_for_emptyfield(Contact &c)
{
	if (!c.first_name.size() || !c.last_name.size() || !c.nick_name.size()
			|| !c.phone_number.size() || !c.darkest_secret.size())
		return (1);
	return (0);
}

int	PhoneBook::get_fields(Contact &contact)
{
	Contact tmp;

	std::cout << "	First name: ";
	std::getline(std::cin, tmp.first_name);
	std::cout << "	Last name: ";
	std::getline(std::cin,	tmp.last_name);
	std::cout << "	Nickname: ";
	std::getline(std::cin, tmp.nick_name);
	std::cout << "	Phone number: ";
	std::getline(std::cin, tmp.phone_number);
	std::cout << "	Darkest secret: ";
	std::getline(std::cin, tmp.darkest_secret);
	if (!check_for_emptyfield(tmp))
	{
		contact = tmp;
		return (0);
	}
	return (1);
}

void	PhoneBook::format_output(void)
{
	std::cout << "     index|first name| last name|  nickname" << std::endl;
}

void	PhoneBook::display_contact(Contact contact, int index)
{
	std::cout << "Index         --/::/: " << index << std::endl;
	std::cout << "First name    --/::/: " << contact.first_name << std::endl;
	std::cout << "Last name     --/::/: " << contact.last_name << std::endl;
	std::cout << "Nickname      --/::/: " << contact.nick_name << std::endl;
	std::cout << "Phone number  --/::/: " << contact.phone_number << std::endl;
	std::cout << "Darkest secre --/::/: " << contact.phone_number << std::endl;
}

void	PhoneBook::clear_buffer(void)
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void	PhoneBook::add()
{
	if (size == 8)
	{
		if (!get_fields(array[index_oldest % size]))
			index_oldest += 1;
	}
	else
	{
		if (!get_fields(array[size]))
			size++;
	}
}
void	PhoneBook::	exit(void)
{
	std::exit(42);
}
void	PhoneBook::search(void)
{
	int	requested_index = 42;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i=0; i < size; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncate(array[i].first_name, 9) << "|";
		std::cout << std::setw(10) << truncate(array[i].last_name, 9) << "|";
		std::cout << std::setw(10) << truncate(array[i].nick_name, 9) << std::endl;
	}
	if (!size)
		return ;
	std::cout << "Enter the desired index: ";
	std::cin >> requested_index;
	clear_buffer();
	if (std::cin.fail())
	{
		std::cout  << "Invaid Entry !! Quitting..." << std::endl;
		std::cin.clear();
		exit();
	}
	if (requested_index < 0 || requested_index >= size)
	{
		std::cout  << "Invaid Entry !! Index out of range" << std::endl;
		return ;
	}
	display_contact(array[requested_index], requested_index);
}


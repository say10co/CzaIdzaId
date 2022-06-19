/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iomanipulator.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:24:43 by adriouic          #+#    #+#             */
/*   Updated: 2022/05/20 02:10:47 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

std::string	PhoneBook::truncate(std::string s, size_t len)
{
	if (s.length() > len)
		return (s.substr(0, len) + ".");
	return (s);
}

bool	check_for_emptyfield(Contact &c)
{
	if (!c.get_first_name().size() || !c.get_last_name().size() 
			|| !c.get_phone_number().size() || !c.get_secret().size()
			|| !c.get_nick_name().size())
		return (1);
	return (0);
}

void	PhoneBook::format_output(void)
{
	std::cout << "     index|first name| last name|  nickname" << std::endl;
}

void	PhoneBook::clear_buffer(void)
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void	PhoneBook::	exit(void)
{
	std::exit(42);
}

int	PhoneBook::get_fields(Contact &contact)
{
	Contact tmp;
	std::string	str;

	std::cout << "	First name: ";
	std::getline(std::cin, str); tmp.set_first_name(str);
	std::cout << "	Last name: ";
	std::getline(std::cin,	str); tmp.set_last_name(str);
	std::cout << "	Nickname: ";
	std::getline(std::cin, str); tmp.set_nick_name(str);
	std::cout << "	Phone number: ";
	std::getline(std::cin, str); tmp.set_phone_number(str);
	std::cout << "	Darkest secret: ";
	std::getline(std::cin, str); tmp.set_secret(str);
	if (!check_for_emptyfield(tmp))
	{
		contact = tmp;
		return (0);
	}
	return (1);
}

void	PhoneBook::display_contact(Contact contact, int index)
{
	std::cout << "Index         --/::/: " << index << std::endl;
	std::cout << "First name    --/::/: " << contact.get_first_name() << std::endl;
	std::cout << "Last name     --/::/: " << contact.get_last_name() << std::endl;
	std::cout << "Nickname      --/::/: " << contact.get_nick_name() << std::endl;
	std::cout << "Phone number  --/::/: " << contact.get_phone_number() << std::endl;
	std::cout << "Darkest secre --/::/: " << contact.get_secret() << std::endl;
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


void	PhoneBook::search(void)
{
	int	requested_index = 42;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i=0; i < size; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncate(array[i].get_first_name(), 9) << "|";
		std::cout << std::setw(10) << truncate(array[i].get_last_name(), 9) << "|";
		std::cout << std::setw(10) << truncate(array[i].get_nick_name(), 9) << std::endl;
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


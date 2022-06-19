/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:23:00 by adriouic          #+#    #+#             */
/*   Updated: 2022/05/20 02:10:17 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

int main(void)
{
	PhoneBook	book;
	std::string	tmp;

	while (42)
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
	}
	return (0);
}

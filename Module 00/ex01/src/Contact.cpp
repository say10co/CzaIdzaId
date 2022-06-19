/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 01:54:53 by adriouic          #+#    #+#             */
/*   Updated: 2022/05/20 02:10:00 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

std::string	Contact::get_first_name(void)
{
	return (first_name);
}
std::string	Contact::get_last_name(void)
{
	return (last_name);
}
std::string	Contact::get_nick_name(void)
{
	return (nick_name);
}
std::string	Contact::get_phone_number(void)
{
	return (phone_number);
}
std::string	Contact::get_secret(void)
{
	return (darkest_secret);
}

void		Contact::set_first_name(std::string str)
{
			first_name = str;
}
void		Contact::set_last_name(std::string str)
{
			last_name = str;
}
void		Contact::set_nick_name(std::string str)
{
			nick_name = str;
}
void		Contact::set_phone_number(std::string str)
{
			phone_number = str;
}
void		Contact::set_secret(std::string str)
{
			darkest_secret = str;
}

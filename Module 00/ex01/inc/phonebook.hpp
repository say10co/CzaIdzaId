#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP 
# include <iostream>
# include <stdlib.h>
# include <iomanip>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number; 
		std::string darkest_secret;
	public:
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_nick_name(void);
		std::string	get_phone_number(void);
		std::string	get_secret(void);
		void		set_first_name(std::string str);
		void		set_last_name(std::string str);
		void		set_nick_name(std::string str);
		void		set_phone_number(std::string str);
		void		set_secret(std::string str);

};

class PhoneBook
{
	private:
		Contact array[8];
		int		size;
		int		index_oldest;

	public:
		PhoneBook()
		{
			size = 0;
			index_oldest = 0;
		}
		int			get_fields(Contact& contact);
		void		format_output(void);
		void		clear_buffer(void);
		void		display_contact(Contact contact, int index);
		void		add();
		void		exit();
		void		search();
		std::string truncate(std::string s, size_t len);

};

#endif /* PHONEBOOK_HPP */

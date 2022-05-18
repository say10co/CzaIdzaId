#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP 
# include <iostream>
# include <stdlib.h>
# include <iomanip>

class Contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number; 
		std::string darkest_secret;
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

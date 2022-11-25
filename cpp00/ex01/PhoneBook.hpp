#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

#define MAX_CONTACT 3

class PhoneBook
{
	Contact _book[MAX_CONTACT];
	int		_i0;
	int		_nb_contact;

public:
	PhoneBook(void);

	void	add_contact(void);
	void	search_contact(void);
	void	display_contacts(void);
	void	display_info(int id);
	void	start(void);
};

#endif

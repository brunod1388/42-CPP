#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>

class Contact
{
	std::string			_first_name;
	std::string			_last_name;
	std::string			_nickname;
	std::string			_phone_number;
	std::string			_darkest_secrets;

public:
	Contact();
	Contact(std::string, std::string, std::string, std::string, std::string);
	~Contact();

	Contact&	operator=(const Contact&);

	std::string	get_first_name(int size = -1) const;
	std::string	get_last_name(int size = -1) const;
	std::string	get_nickname(int size = -1) const;
	std::string	get_phone_number(int size = -1) const;
	std::string	get_darkest_secrets(int size = -1) const;
};

std::ostream& operator<<(std::ostream& os, const Contact& rhs);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno1388 <bruno1388@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:46:05 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/11/25 01:10:16 by bruno1388        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

Contact::Contact():
	_first_name(),
	_last_name(),
	_nickname(),
	_phone_number(),
	_darkest_secrets()
{}

Contact::Contact(std::string first,
				 std::string last,
				 std::string nick,
				 std::string phone,
				 std::string secrets):
	_first_name(first),
	_last_name(last),
	_nickname(nick),
	_phone_number(phone),
	_darkest_secrets(secrets)
{}

Contact::~Contact()
{}

Contact&	Contact::operator=(const Contact& rhs)
{
	if (&rhs == this)
		return *this;
	_first_name = rhs._first_name;
	_last_name = rhs._last_name;
	_nickname = rhs._nickname;
	_phone_number = rhs._phone_number;
	_darkest_secrets = rhs._darkest_secrets;
	return *this;
}

std::string	Contact::get_first_name(int size) const
{
	if (size == -1)
		return _first_name;
	return _first_name.substr(0, size);
}

std::string	Contact::get_last_name(int size) const
{
	if (size == -1)
		return _last_name;
	return _last_name.substr(0, size);
}

std::string	Contact::get_nickname(int size) const
{
	if (size == -1)
		return _nickname;
	return _nickname.substr(0, size);
}

std::string	Contact::get_phone_number(int size) const
{
	if (size == -1)
		return _phone_number;
	return _phone_number.substr(0, size);
}

std::string	Contact::get_darkest_secrets(int size) const
{
	if (size == -1)
		return _darkest_secrets;
	return _darkest_secrets.substr(0, size);
}

std::ostream& operator<<(std::ostream& os, const Contact& rhs)
{
	os << "First Name      : " << rhs.get_first_name() << std::endl;
	os << "Last Name       : " << rhs.get_last_name() << std::endl;
	os << "NickName        : " << rhs.get_nickname() << std::endl;
	os << "Phone number    : " << rhs.get_phone_number() << std::endl;
	os << "Darkest secrets : " << rhs.get_darkest_secrets() << std::endl;

	return os;
}
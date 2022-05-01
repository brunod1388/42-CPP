/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:46:05 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/04/29 22:25:17 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

string	Contact::get_first_name(void)
{
	return this->first_name;
}

string	Contact::get_last_name(void)
{
	return this->last_name;
}

string	Contact::get_nickname(void)
{
	return this->nickname;
}

string	Contact::get_phone_number(void)
{
	return this->phone_number;
}

string	Contact::get_darkest_secrets(void)
{
	return this->darkest_secrets;
}

bool	Contact::set_first_name(string first_name)
{
	this->first_name = first_name;
	return false;
}

bool	Contact::set_last_name(string last_name)
{
	this->last_name = last_name;
	return false;
}

bool	Contact::set_nickname(string nickname)
{
	this->nickname = nickname;
	return false;
}

bool	Contact::set_phone_number(string phone_number)
{
	this->phone_number = phone_number;
	return false;
}

bool	Contact::set_darkest_secrets(string darkest_secrets)
{
	this->darkest_secrets = darkest_secrets;
	return false;
}

// void	Contact::add_contact(void)
// {
// 	string	input;
// 	int		i;

// 	i = (i0 + nb_contact) % MAX_CONTACT;
// 	if (nb_contact < MAX_CONTACT)
// 		++nb_contact;
// 	else
// 		i0 = (i0 + 1) % MAX_CONTACT;
// 	cout << "First name : ";
// 	cin >> input;
// 	book[i].set_first_name(input);
// 	cout << "Last name  : ";
// 	cin >> input;
// 	book[i].set_last_name(input);
// 	cout << "Nickname   : ";
// 	cin >> input;
// 	book[i].set_nickname(input);
// 	cout << "Phone nbr  : ";
// 	cin >> input;
// 	book[i].set_phone_number(input);
// 	cout << "Darkest secrets : ";
// 	cin >> input;
// 	book[i].set_darkest_secrets(input);
// }

// void	Contact::search_contact(void)
// {
// 	int	i;
	
// 	display_contacts();
// 	while (42)
// 	{
// 		cout << "Enter desired contact : ";
// 		cin >> i;
// 		if (cin.fail() || i < 0 || nb_contact <= i)
// 		{
// 			cin.clear();
// 			// cin.ignore();
// 			cout << "Contact id must be 0 to " << nb_contact - 1 << endl;
// 		}
// 		else
// 			break ;
// 	}
// 	if (i < 0 || nb_contact <= i)
// 		cout << "Contact id must be 0 to " << nb_contact - 1 << endl;
// 	else
// 		display_info(i);
// }

// static char	*trim10(char *sc, string str)
// {
// 	size_t	i = 0;

// 	while (i < 10 && i < str.length())
// 	{
// 		sc[i] = str[i];
// 		++i;
// 	}
// 	while (i < 10)
// 		sc[i++] = ' ';
// 	sc[i] = 0;
// 	return sc;
// }

// void	Contact::display_contacts(void)
// {
// 	Contact *c;
// 	char	s10[11];

// 	for (int i = 0; i < nb_contact; i++)
// 	{
// 		c = &book[i0 + i % MAX_CONTACT];
// 		cout << i;
// 		cout << " | ";
// 		cout << trim10(s10, c->get_first_name());
// 		cout << " | ";
// 		cout << trim10(s10, c->get_last_name());
// 		cout << " | ";
// 		cout << trim10(s10, c->get_nickname());
// 		cout << " | " << endl;
// 	}
// }

// void	Contact::display_contacts(void)
// {
// 	Contact *c;
// 	char	s10[11];

// 	for (int i = 0; i < nb_contact; i++)
// 	{
// 		c = &book[i0 + i % MAX_CONTACT];
// 		cout << setfill(' ') << i << " | ";
// 		cout << std::setw(10) << c->get_first_name().substr(0, 10);
// 		cout << " | ";
// 		cout << std::setw(10) << c->get_last_name().substr(0, 10);
// 		cout << " | ";
// 		cout << std::setw(10) << c->get_nickname().substr(0, 10);
// 		cout << " | " << endl;
// 	}
// }

// void	Contact::display_info(int id)
// {
// 	Contact *c = &book[id + i0 % MAX_CONTACT];

// 	cout << "First Name      : " << c->get_first_name() << endl;
// 	cout << "Last Name       : " << c->get_last_name() << endl;
// 	cout << "NickName        : " << c->get_nickname() << endl;
// 	cout << "Phone number    : " << c->get_phone_number() << endl;
// 	cout << "Darkest secrets : " << c->get_darkest_secrets() << endl;
// }

// void	Contact::PhoneBook(void)
// {
// 	string	input;

// 	cout << "############################################" << endl;
// 	cout << "###                                      ###" << endl;
// 	cout << "###             Welcome to my            ###" << endl;
// 	cout << "###              Crappy Book             ###" << endl;
// 	cout << "###                                      ###" << endl;
// 	cout << "############################################" << endl;
// 	cout << endl;
// 	input = "";
// 	while (input.compare("EXIT"))
// 	{
// 		cout << "Please enter a command, ADD, SEARCH or EXIT" << endl;
// 		cout << endl;
// 		cin >> input;
// 		if (!input.compare("ADD"))
// 			add_contact();
// 		else if (!input.compare("SEARCH"))
// 			search_contact();
// 		else if (!input.compare("EXIT"))
// 			cout << "Command not available. Please enter ADD, SEARCH or EXIT" << endl;
// 	}
// }

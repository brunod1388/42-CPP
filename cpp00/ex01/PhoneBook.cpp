/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 00:29:37 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/05/01 02:54:40 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook(void)
{
	this->i0 = -1;
	this->nb_contact = 0;
}

void	PhoneBook::add_contact(void)
{
	Contact *c;
	string	input;
	int	i;

	if (this->nb_contact < MAX_CONTACT)
		i = this->nb_contact++;
	else
		i = ++this->i0 % MAX_CONTACT;
	c = &this->book[i];
	cout << "First name : ";
	cin >> input;
	c->set_first_name(input);
	cout << "Last name  : ";
	cin >> input;
	c->set_last_name(input);
	cout << "Nickname   : ";
	cin >> input;
	c->set_nickname(input);
	cout << "Phone nbr  : ";
	cin >> input;
	c->set_phone_number(input);
	cout << "Darkest secrets : ";
	cin >> input;
	c->set_darkest_secrets(input);
}

void	PhoneBook::search_contact(void)
{
	int	i;

	if (this->nb_contact < 1)
		return ;
	display_contacts();
	while (42)
	{
		cout << "Enter desired contact : ";
		cin >> i;
		if (cin.fail() || i < 0 || this->nb_contact <= i)
		{
			cin.clear();
			cin.ignore();
			cout << "Contact id must be 0 to " << this->nb_contact - 1 << endl;
		}
		else
			break ;
	}
	if (i < 0 || this->nb_contact <= i)
		cout << "Contact id must be 0 to " << this->nb_contact - 1 << endl;
	else
		display_info(i);
}

void	PhoneBook::display_contacts(void)
{
	Contact *c;

	for (int i = 0; i < this->nb_contact; i++)
	{
		c = &this->book[i];
		cout << setfill(' ') << i << " | ";
		cout << setw(10) << c->get_first_name().substr(0, 10);
		cout << " | ";
		cout << setw(10) << c->get_last_name().substr(0, 10);
		cout << " | ";
		cout << setw(10) << c->get_nickname().substr(0, 10);
		cout << " | " << endl;
	}
}

void	PhoneBook::display_info(int id)
{
	Contact *c = &this->book[id % MAX_CONTACT];

	cout << "First Name      : " << c->get_first_name() << endl;
	cout << "Last Name       : " << c->get_last_name() << endl;
	cout << "NickName        : " << c->get_nickname() << endl;
	cout << "Phone number    : " << c->get_phone_number() << endl;
	cout << "Darkest secrets : " << c->get_darkest_secrets() << endl;
}

void	PhoneBook::start(void)
{
	string	input;

	cout << "############################################" << endl;
	cout << "###                                      ###" << endl;
	cout << "###             Welcome to my            ###" << endl;
	cout << "###              Crappy Book             ###" << endl;
	cout << "###                                      ###" << endl;
	cout << "############################################" << endl;
	cout << endl;
	input = "";
	while (input.compare("EXIT"))
	{
		cout << "Please enter a command, ADD, SEARCH or EXIT" << endl;
		cout << endl;
		cin >> input;
		if (!input.compare("ADD"))
			this->add_contact();
		else if (!input.compare("SEARCH"))
			this->search_contact();
		else if (!input.compare("EXIT"))
			cout << "Command not available. Please enter ADD, SEARCH or EXIT" << endl;
	}
}

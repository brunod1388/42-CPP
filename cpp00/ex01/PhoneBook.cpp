/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 00:29:37 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/05/04 14:12:55 by brunodeoliv      ###   ########.fr       */
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
	std::string	input;
	int	i;

	if (this->nb_contact < MAX_CONTACT)
		i = this->nb_contact++;
	else
		i = ++this->i0 % MAX_CONTACT;
	c = &this->book[i];
	std::cout << "First name : ";
	getline(std::cin, input);
	c->set_first_name(input);
	std::cout << "Last name  : ";
	getline(std::cin, input);
	c->set_last_name(input);
	std::cout << "Nickname   : ";
	getline(std::cin, input);
	c->set_nickname(input);
	std::cout << "Phone nbr  : ";
	getline(std::cin, input);
	c->set_phone_number(input);
	std::cout << "Darkest secrets : ";
	getline(std::cin, input);
	c->set_darkest_secrets(input);
}

void	PhoneBook::search_contact(void)
{
	int	i;

	if (this->nb_contact < 1)
		return ;
	display_contacts();
	std::cout << "Enter desired contact : ";
	std::cin >> i;
	if (std::cin.fail() || i < 0 || this->nb_contact <= i)
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Contact id must be 0 to " << this->nb_contact - 1 << std::endl;
	}
	else
		display_info(i);
}

void	PhoneBook::display_contacts(void)
{
	Contact *c;

	for (int i = 0; i < this->nb_contact; i++)
	{
		c = &this->book[i];
		std::cout << std::setfill(' ') << i << " | ";
		std::cout << std::setw(10) << c->get_first_name().substr(0, 10);
		std::cout << " | ";
		std::cout << std::setw(10) << c->get_last_name().substr(0, 10);
		std::cout << " | ";
		std::cout << std::setw(10) << c->get_nickname().substr(0, 10);
		std::cout << " | " << std::endl;
	}
}

void	PhoneBook::display_info(int id)
{
	Contact *c = &this->book[id % MAX_CONTACT];

	std::cout << "First Name      : " << c->get_first_name() << std::endl;
	std::cout << "Last Name       : " << c->get_last_name() << std::endl;
	std::cout << "NickName        : " << c->get_nickname() << std::endl;
	std::cout << "Phone number    : " << c->get_phone_number() << std::endl;
	std::cout << "Darkest secrets : " << c->get_darkest_secrets() << std::endl;
}

void	PhoneBook::start(void)
{
	std::string	input;

	std::cout << "############################################" << std::endl;
	std::cout << "###                                      ###" << std::endl;
	std::cout << "###             Welcome to my            ###" << std::endl;
	std::cout << "###              Crappy Book             ###" << std::endl;
	std::cout << "###                                      ###" << std::endl;
	std::cout << "############################################" << std::endl;
	std::cout << std::endl;
	input = "";
	while (input.compare("EXIT"))
	{
		std::cout << "Please enter a command, ADD, SEARCH or EXIT" << std::endl;
		std::cout << std::endl;
		getline(std::cin, input);
		if (!input.compare("ADD"))
			this->add_contact();
		else if (!input.compare("SEARCH"))
			this->search_contact();
		else if (!input.compare(""))
			this->search_contact();
		else if (input.compare("EXIT"))
			std::cout << "Command not available." << std::endl;
	}
}

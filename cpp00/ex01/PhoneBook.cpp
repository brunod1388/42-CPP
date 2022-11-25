/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno1388 <bruno1388@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 00:29:37 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/11/25 01:06:42 by bruno1388        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook(void)
{
	_i0 = -1;
	_nb_contact = 0;
}

void	PhoneBook::add_contact(void)
{
	std::string	input[5];

	if (_nb_contact < MAX_CONTACT)
		_nb_contact++;
	std::cout << "First name : ";		std::cin >> input[0];
	std::cout << "Last name  : ";		std::cin >> input[1];
	std::cout << "Nickname   : ";		std::cin >> input[2];
	std::cout << "Phone nbr  : ";		std::cin >> input[3];
	std::cout << "Darkest secrets : ";	std::cin >> input[4];

	_book[++_i0 % MAX_CONTACT] = Contact(input[0], input[1], input[2], input[3], input[4]);
}

void	PhoneBook::search_contact(void)
{
	int	i;

	if (_nb_contact < 1)
		return ;
	display_contacts();
	std::cout << "Enter desired contact : ";	std::cin >> i;

	if (std::cin.fail() || i < 0 || _nb_contact <= i)
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Contact id must be 0 to " << _nb_contact - 1 << std::endl;
	}
	else
		std::cout << _book[i];
}

void	PhoneBook::display_contacts(void)
{
	Contact *c;

	for (int i = 0; i < _nb_contact; i++)
	{
		c = &_book[i];
		std::cout << std::setfill(' ') << i << " | ";
		std::cout << std::setw(10) << c->get_first_name(10);
		std::cout << " | ";
		std::cout << std::setw(10) << c->get_last_name(10);
		std::cout << " | ";
		std::cout << std::setw(10) << c->get_nickname(10);
		std::cout << " | " << std::endl;
	}
}

void	PhoneBook::start(void)
{
	std::string	input("");

	std::cout << "############################################" << std::endl;
	std::cout << "###             Welcome to my            ###" << std::endl;
	std::cout << "###              Crappy _book            ###" << std::endl;
	std::cout << "############################################" << std::endl;
	std::cout << std::endl;

	while (input != "EXIT")
	{
		std::cout << "Please enter a command, ADD, SEARCH or EXIT" << std::endl;
		std::cout << std::endl;
		std::cin >> input;
		if (input == "ADD")
			add_contact();
		else if (input == "SEARCH")
			search_contact();
		else if (input != "EXIT")
			std::cout << "Command not available." << std::endl;
	}
}

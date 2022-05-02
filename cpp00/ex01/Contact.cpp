/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:46:05 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/05/02 22:07:32 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

std::string	Contact::get_first_name(void)
{
	return this->first_name;
}

std::string	Contact::get_last_name(void)
{
	return this->last_name;
}

std::string	Contact::get_nickname(void)
{
	return this->nickname;
}

std::string	Contact::get_phone_number(void)
{
	return this->phone_number;
}

std::string	Contact::get_darkest_secrets(void)
{
	return this->darkest_secrets;
}

bool	Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
	return false;
}

bool	Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
	return false;
}

bool	Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
	return false;
}

bool	Contact::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
	return false;
}

bool	Contact::set_darkest_secrets(std::string darkest_secrets)
{
	this->darkest_secrets = darkest_secrets;
	return false;
}

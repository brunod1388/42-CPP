/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:25:54 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 01:10:22 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("")
{
	std::cout << "WrongAnimal Constructor" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
	std::cout << "WrongAnimal copy Constructor" << std::endl;
	return;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor" << std::endl;
	return;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->type = rhs.getType();
	std::cout << "Assignement WrongAnimal" << std::endl;
	return *this;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal Sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return this->type;
}


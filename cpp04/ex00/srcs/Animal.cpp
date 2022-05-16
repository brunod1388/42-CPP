/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:25:54 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 01:08:39 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("")
{
	std::cout << "Animal Constructor" << std::endl;
	return;
}

Animal::Animal(const Animal &src)
{
	*this = src;
	std::cout << "Animal copy Constructor" << std::endl;
	return;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor" << std::endl;
	return;
}

Animal & Animal::operator=(const Animal &rhs)
{
	this->type = rhs.getType();
	std::cout << "Assignement Animal" << std::endl;
	return *this;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal Sound" << std::endl;
}

std::string	Animal::getType(void) const
{
	return this->type;
}


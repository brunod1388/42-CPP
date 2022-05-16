/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:25:54 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 00:37:40 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog Constructor" << std::endl;
	return;
}

Dog::Dog(const Dog &src)
{
	*this = src;
	std::cout << "Dog copy Constructor" << std::endl;
	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor" << std::endl;
	return;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouaff" << std::endl;
}

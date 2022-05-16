/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:25:54 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 00:37:40 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat Constructor" << std::endl;
	return;
}

Cat::Cat(const Cat &src)
{
	this->type = src.getType();
	*(this->brain) = *(src.getBrain());
	std::cout << "Cat copy Constructor" << std::endl;
	return;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat Destructor" << std::endl;
	return;
}

Cat & Cat::operator=(const Cat &rhs)
{
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	std::cout << "Assignement Animal" << std::endl;
	return *this;
}

AAnimal & Cat::operator=(const AAnimal &rhs)
{
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	std::cout << "Assignement Animal" << std::endl;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaaaow" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return this->brain;
}

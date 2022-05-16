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
	this->type = "Cat";
	std::cout << "Cat Constructor" << std::endl;
	return;
}

Cat::Cat(const Cat &src)
{
	*this = src;
	std::cout << "Cat copy Constructor" << std::endl;
	return;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor" << std::endl;
	return;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaaaow" << std::endl;
}

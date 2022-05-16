/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:25:54 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 00:37:40 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat Constructor" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat &src)
{
	this->type = src.getType();
	std::cout << "WrongCat copy Constructor" << std::endl;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor" << std::endl;
	return;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Miaaaaow" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 03:28:21 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/01 04:21:36 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iomanip>
#include <iostream>

void	Zombie::anounce(void)
{
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie(string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is dying" << endl;
}

void	Zombie::set_name(string name)
{
	this->name = name;
}

string	Zombie::get_name(void)
{
	return this->name;
}

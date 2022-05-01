/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:49:43 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/01 23:55:51 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string type)
{
	this->type = type;
}

Weapon::~Weapon(void)
{
	return ;
}

string	Weapon::getType(void)
{
	return this->type;
}

void	Weapon::setType(string type)
{
	this->type = type;
}

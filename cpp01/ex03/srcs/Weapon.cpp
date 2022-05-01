/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:49:43 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/01 15:51:23 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string type)
{
	this->type = type;
}

string	Weapon::getType(void)
{
	return this->type;
}

void	Weapon::setType(string type)
{
	this->type = type;
}

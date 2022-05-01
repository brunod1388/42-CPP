/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:58:55 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/01 16:11:34 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(string name, Weapon w)
{
	this->name = name;
	this->weapon = w;
}

HumanB::HumanB(string name)
{
	this->name = name;
	this->weapon.setType("no Weapon");
}

void	HumanB::attack(void)
{
	cout << this->name << "attack with their" << this->weapon.getType();
}

void	HumanB::setWeapon(Weapon w)
{
	this->weapon = w;
}

Weapon	HumanB::getWeapon(void)
{
	return this->weapon;
}

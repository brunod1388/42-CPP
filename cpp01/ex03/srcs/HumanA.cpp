/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:09:26 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/01 16:12:16 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(string name, Weapon w)
{
	this->name = name;
	this->weapon = w;
}

HumanA::HumanA(string name, Weapon w)
{
	this->name = name;
	this->weapon.setType("no Weapon");
}

void	HumanA::attack(void)
{
	cout << this->name << "attack with their" << this->weapon.getType();
}

void	HumanA::setWeapon(Weapon w)
{
	this->weapon = w;
}

Weapon	HumanA::getWeapon(void)
{
	return this->weapon;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:58:55 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/01 23:50:52 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(string name)
{
	this->name = name;
	this->weapon = NULL;;
}

void	HumanB::attack(void)
{
	cout << this->name << " attack with their " << this->weapon->getType() << endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w;
}

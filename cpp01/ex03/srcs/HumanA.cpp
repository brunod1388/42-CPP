/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:09:26 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/01 23:50:36 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(string name, Weapon &w)
{
	this->name = name;
	this->weapon = &w;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::attack(void)
{
	cout << this->name << " attack with their " << this->weapon->getType() << endl;
}

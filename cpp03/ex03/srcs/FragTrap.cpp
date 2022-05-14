/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:08:58 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/15 00:38:18 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void):
	ClapTrap("Default FragTrap", 100, 100, 30)
{
	std::cout << "Default FragTrap Constructor called" << std::endl;

	return;
}

FragTrap::FragTrap(std::string name):
	ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap Constructor called : " << name << "created" << std::endl;
	return;
}

FragTrap::FragTrap(const ClapTrap &src):
	ClapTrap(src.getName(), src.getHP(), src.getEnergy(), src.getHP())
{
	std::cout << "Copy FragTrap Constructor Called" << std::endl;

	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap has been destroyed" << std::endl;

	return;
}

void		FragTrap::attack(const std::string& target)
{
	if (this->_EnergyPoint && this->_hitPoint)
	{
		std::cout << "FragTrap "<< this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_EnergyPoint--;
	}
	else
		std::cout << "ClapTrap "<< this->_name << " has no Energy left" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " highfives guys" << std::endl;
}

std::ostream & operator<<(std::ostream &os, const FragTrap &rhs)
{
	os << rhs.getName() << " , HP(" << rhs.getHP() << "), EP(" << rhs.getEnergy() << "), AtDMG(" << rhs.getAttDmg() << ")";
	return os;
}

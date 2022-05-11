/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:08:58 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/10 13:44:39 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void):
_name("Default FragTrap"), _hitPoint(100), _EnergyPoint(100), _attackDamage(30)
{
	std::cout << "Default FragTrap Constructor called" << std::endl;

	return;
}

FragTrap::FragTrap(std::string name):
_name(name), _hitPoint(100), _EnergyPoint(100), _attackDamage(30)
{
	std::cout << "FragTrap Constructor called : " << name << "created" << std::endl;
	return;
}

FragTrap::FragTrap(const ClapTrap &src):
_name(src.getName()), _hitPoint(src.getHP()), _EnergyPoint(src.getEnergy()), _attackDamage(src.getAttDmg())
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
	std::cout << "FragTrap highfives guys" << std::endl;
}

std::ostream & operator<<(std::ostream &os, const FragTrap &rhs)
{
	os << rhs.getName() << " , HP(" << rhs.getHP() << "), EP(" << rhs.getEnergy() << "), AtDMG(" << rhs.getAttDmg() << ")";
	return os;
}

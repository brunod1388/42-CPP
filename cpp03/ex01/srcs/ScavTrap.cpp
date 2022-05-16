/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:08:58 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/15 19:23:38 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):
	ClapTrap("Default ScavTrap", 100, 50, 20),
	_keeperMode(false)
{
	std::cout << "Default ScavTrap Constructor called" << std::endl;

	return;
}

ScavTrap::ScavTrap(std::string name):
	ClapTrap(name, 100, 50, 20),
	_keeperMode(false)
{
	std::cout << "ScavTrap Constructor called : " << name << "created" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name, int hp, int ep, int att):
	ClapTrap(name, hp, ep, att)
{
	std::cout << "Constructor called : " << name << "created" << std::endl;
	return;
}
ScavTrap::ScavTrap(const ClapTrap &src):
	ClapTrap(src.getName(), src.getHP(), src.getEnergy(), src.getAttDmg()),
	_keeperMode(false)
{
	std::cout << "Copy ScavTrap Constructor Called" << std::endl;

	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap has been destroyed" << std::endl;

	return;
}

bool	ScavTrap::getKeeperMode(void) const
{
	return this->_keeperMode;
}

void		ScavTrap::attack(const std::string& target)
{
	this->_keeperMode = false;
	if (this->getEnergy() && this->getHP())
	{
		std::cout << "ScavTrap "<< this->getName() << " attacks " << target;
		std::cout << ", causing " << this->getAttDmg() << " points of damage!" << std::endl;
		this->setEnergy(this->getEnergy() - 1);
	}
	else
		std::cout << "ClapTrap "<< this->getName() << " has no Energy left" << std::endl;
}

void	ScavTrap::guardGate()
{
	this->_keeperMode = true;
	std::cout << "ScavTrap is now on keeper mode" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &src)
{
	this->_name = src._name;
	this->_hitPoint = src._hitPoint;
	this->_EnergyPoint = src._EnergyPoint;
	this->_attackDamage = src._attackDamage;

	return *this;
}

std::ostream & operator<<(std::ostream &os, const ScavTrap &rhs)
{
	os << rhs.getName() << " , HP(" << rhs.getHP() << "), EP(" << rhs.getEnergy() << "), AtDMG(" << rhs.getAttDmg() << ")";
	os << ", KeeperMode : " << (rhs.getKeeperMode() ? "Active" : "Inactive");

	return os;
}

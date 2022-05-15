/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:08:58 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 00:04:12 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "Default ScavTrap";
	this->_hitPoint = 100;
	this->_EnergyPoint = 50;
	this->_attackDamage = 20;
	this->_keeperMode = false;
	std::cout << "Default ScavTrap Constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_EnergyPoint = 50;
	this->_attackDamage = 20;
	this->_keeperMode = false;
	std::cout << "ScavTrap Constructor called : " << name << "created" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name, int hp, int ep, int att):
	ClapTrap(name, hp, ep, att),
	_keeperMode(false)
{
	this->_name = name;
	this->_hitPoint = hp;
	this->_EnergyPoint = ep;
	this->_attackDamage = att;
	this->_keeperMode = false;
	std::cout << "Constructor called : " << name << "created" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	this->_name = src.getName();
	this->_hitPoint = src.getHP();
	this->_EnergyPoint = src.getEnergy();
	this->_attackDamage = src.getAttDmg();
	this->_keeperMode = src.getKeeperMode();
	std::cout << "Copy ScavTrap Constructor Called" << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &src)
{
	this->_name = src._name;
	this->_hitPoint = src._hitPoint;
	this->_EnergyPoint = src._EnergyPoint;
	this->_attackDamage = src._attackDamage;
	return *this;
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
		std::cout << this->getName() << " attacks " << target;
		std::cout << ", causing " << this->getAttDmg() << " points of damage!" << std::endl;
		this->setEnergy(this->getEnergy() - 1);
	}
	else
		std::cout << this->getName() << " has no Energy left" << std::endl;
}

void	ScavTrap::guardGate()
{
	this->_keeperMode = true;
	std::cout << "ScavTrap is now on keeper mode" << std::endl;
}

std::ostream & operator<<(std::ostream &os, const ScavTrap &rhs)
{
	os << rhs.getName() << " , HP(" << rhs.getHP() << "), EP(" << rhs.getEnergy() << "), AtDMG(" << rhs.getAttDmg() << ")";
	os << ", KeeperMode : " << (rhs.getKeeperMode() ? "Active" : "Inactive");

	return os;
}

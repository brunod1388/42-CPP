/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:08:58 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/09 02:31:29 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):
_name("Default ScavTrap"), _hitPoint(100), _EnergyPoint(50), _attackDamage(20), _keeperMode(false)
{
	std::cout << "Default ScavTrap Constructor called" << std::endl;

	return;
}

ScavTrap::ScavTrap(std::string name):
_name(name), _hitPoint(100), _EnergyPoint(50), _attackDamage(20), _keeperMode(false)
{
	std::cout << "ScavTrap Constructor called : " << name << "created" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ClapTrap &src):
_name(src.getName()), _hitPoint(src.getHP()), _EnergyPoint(src.getEnergy()), _attackDamage(src.getAttDmg()), _keeperMode(false)
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
	if (this->_EnergyPoint && this->_hitPoint)
	{
		std::cout << "ScavTrap "<< this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_EnergyPoint--;
	}
	else
		std::cout << "ClapTrap "<< this->_name << " has no Energy left" << std::endl;
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

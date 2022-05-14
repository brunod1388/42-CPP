/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:08:58 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/13 18:21:12 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void):
_name("Default DiamondTrap"), _hitPoint(100), _EnergyPoint(50), _attackDamage(20), _keeperMode(false)
{
	std::cout << "Default DiamondTrap Constructor called" << std::endl;

	return;
}

DiamondTrap::DiamondTrap(std::string name):
_name(name), _hitPoint(100), _EnergyPoint(50), _attackDamage(20), _keeperMode(false)
{
	std::cout << "DiamondTrap Constructor called : " << name << "created" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(const ClapTrap &src):
_name(src.getName()), _hitPoint(src.getHP()), _EnergyPoint(src.getEnergy()), _attackDamage(src.getAttDmg()), _keeperMode(false)
{
	std::cout << "Copy DiamondTrap Constructor Called" << std::endl;

	return;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap has been destroyed" << std::endl;

	return;
}

bool	DiamondTrap::getKeeperMode(void) const
{
	return this->_keeperMode;
}

void		DiamondTrap::attack(const std::string& target)
{
	this->_keeperMode = false;
	if (this->_EnergyPoint && this->_hitPoint)
	{
		std::cout << "DiamondTrap "<< this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_EnergyPoint--;
	}
	else
		std::cout << "ClapTrap "<< this->_name << " has no Energy left" << std::endl;
}

void	DiamondTrap::guardGate()
{
	this->_keeperMode = true;
	std::cout << "DiamondTrap is now on keeper mode" << std::endl;
}

std::ostream & operator<<(std::ostream &os, const DiamondTrap &rhs)
{
	os << rhs.getName() << " , HP(" << rhs.getHP() << "), EP(" << rhs.getEnergy() << "), AtDMG(" << rhs.getAttDmg() << ")";
	os << ", KeeperMode : " << (rhs.getKeeperMode() ? "Active" : "Inactive");

	return os;
}

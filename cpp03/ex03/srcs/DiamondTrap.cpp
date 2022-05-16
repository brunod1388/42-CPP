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

DiamondTrap::DiamondTrap(void)
{
	ClapTrap::_name = "Default_diamond_clap_name";
	this->_name = "Default_Diamond";
	this->_hitPoint = FragTrap::_hitPoint;
	this->_EnergyPoint = ScavTrap::_EnergyPoint;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_keeperMode = false;
	std::cout << "Default DiamondTrap Constructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoint = FragTrap::_hitPoint;
	this->_EnergyPoint = ScavTrap::_EnergyPoint;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_keeperMode = false;
	std::cout << "DiamondTrap Constructor called : " << name << "created" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	ClapTrap::_name = src.getName() + "_clap_name";
	this->_name = src.getName();
	this->_hitPoint = src.getHP();
	this->_EnergyPoint = src.getEnergy();
	this->_attackDamage = src.getAttDmg();
	this->_keeperMode = src.getKeeperMode();
	std::cout << "Copy DiamondTrap Constructor Called" << std::endl;

	return;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &src)
{
	ClapTrap::_name = src.getName() + "_clap_name";
	this->_name = src.getName();
	this->_hitPoint = src.getHP();
	this->_EnergyPoint = src.getEnergy();
	this->_attackDamage = src.getAttDmg();
	this->_keeperMode = src.getKeeperMode();
	std::cout << "DiamondTrap Assignation operator Called" << std::endl;

	return *this;
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
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "ClapTrap name : " << ClapTrap::_name << std::endl;
	std::cout << "Diam's name : " << this->_name << std::endl;
	
}


std::ostream & operator<<(std::ostream &os, const DiamondTrap &rhs)
{
	os << rhs.getName() << " , HP(" << rhs.getHP() << "), EP(" << rhs.getEnergy() << "), AtDMG(" << rhs.getAttDmg() << ")";
	os << ", KeeperMode : " << (rhs.getKeeperMode() ? "Active" : "Inactive");

	return os;
}

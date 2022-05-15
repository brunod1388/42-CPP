/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:08:58 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/15 00:11:33 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):
	_name("Default clapTrap"),
	_hitPoint(10),
	_EnergyPoint(10),
	_attackDamage(0)
{
	std::cout << "Default Constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name):
	_name(name),
	_hitPoint(10),
	_EnergyPoint(10),
	_attackDamage(0)
{
	std::cout << "Constructor called : " << name << " created" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &src):
	_name(src._name),
	_hitPoint(src._hitPoint),
	_EnergyPoint(src._EnergyPoint),
	_attackDamage(src._attackDamage)
{
	std::cout << "Copy Constructor Called" << std::endl;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap has been destroyed" << std::endl;

	return;
}


ClapTrap & ClapTrap::operator=(const ClapTrap &src)
{
	this->_name = src._name;
	this->_hitPoint = src._hitPoint;
	this->_EnergyPoint = src._EnergyPoint;
	this->_attackDamage = src._attackDamage;

	return *this;
}

std::string	ClapTrap::getName(void) const
{
	return this->_name;
}

int			ClapTrap::getHP(void) const
{
	return this->_hitPoint;
}

int			ClapTrap::getEnergy(void) const
{
	return this->_EnergyPoint;
}

int			ClapTrap::getAttDmg(void) const
{
	return this->_attackDamage;
}

void		ClapTrap::setName(const std::string name)
{
	this->_name = name;
}

void		ClapTrap::setHP(const int hp)
{
	this->_hitPoint = hp;
}

void		ClapTrap::setEnergie(const int energy)
{
	this->_EnergyPoint = energy;
}

void		ClapTrap::setAttDmg(const int atDmg)
{
	this->_attackDamage = atDmg;
}

void		ClapTrap::attack(const std::string& target)
{
	if (this->_EnergyPoint && this->_hitPoint)
	{
		std::cout << "ClapTrap "<< this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_EnergyPoint--;
	}
	else
		std::cout << "ClapTrap "<< this->_name << " has no Energy left" << std::endl;
}

void 		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint > 0)
	{
		this->_hitPoint -= amount;
		std::cout << "ClapTrap "<< this->_name << " took " << amount << "damage." <<std:: endl;
		if (this->_hitPoint < 0)
		{
			std::cout << "ClapTrap "<< this->_name << " died." << std::endl;
			this->_hitPoint = 0;
		}
	}
}

void 		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoint && this->_hitPoint)
	{
		this->_EnergyPoint--;
		std::cout << "ClapTrap "<< this->_name << " regain " << amount << " HP" << std::endl;

	}
	else
		std::cout << "ClapTrap "<< this->_name << " has no Energy left" << std::endl;

}

std::ostream & operator<<(std::ostream &os, const ClapTrap &rhs)
{
	os << rhs.getName() << " , HP(" << rhs.getHP() << "), EP(" << rhs.getEnergy() << "), AtDMG(" << rhs.getAttDmg() << ")";

	return os;
}

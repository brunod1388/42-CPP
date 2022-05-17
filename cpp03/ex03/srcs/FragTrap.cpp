/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:08:58 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 23:34:05 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_name = "Default FragTrap";
	this->_hitPoint = 100;
	this->_EnergyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "Default FragTrap Constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_EnergyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Constructor called : " << name << "created" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name, int hp, int ep, int att)
{
	this->_name = name;
	this->_hitPoint = hp;
	this->_EnergyPoint = ep;
	this->_attackDamage = att;
	std::cout << "Constructor called : " << name << "created" << std::endl;
	return;
}

FragTrap::FragTrap(const ClapTrap &src)
{
	this->_name = src.getName();
	this->_hitPoint = src.getHP();
	this->_EnergyPoint = src.getEnergy();
	this->_attackDamage = src.getAttDmg();
	std::cout << "Copy FragTrap Constructor Called" << std::endl;

	return;
}

FragTrap & FragTrap::operator=(const FragTrap &src)
{
	this->_name = src._name;
	this->_hitPoint = src._hitPoint;
	this->_EnergyPoint = src._EnergyPoint;
	this->_attackDamage = src._attackDamage;

	return *this;
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
		std::cout << "FragTrap "<< this->_name << " has no Energy left" << std::endl;
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

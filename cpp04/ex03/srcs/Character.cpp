/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 02:48:16 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/17 13:47:08 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	for (int i = 0; i < Character::_nbSlot; i++)
		this->_slot[i] = NULL;
	return ;
}

Character::Character(const std::string &name)
{
	*this = Character();
	this->_name = name;
	return ;
}

Character::Character(const Character &src)
{
	*this = src;
	return ;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_slot[i])
			delete this->_slot[i];
	return ;
}

Character & Character::operator=(const Character &rhs)
{
	for (int i = 0; i < Character::_nbSlot; i++)
	{
		if (this->_slot[i])
			delete this->_slot[i];
		this->_slot[i] = rhs._slot[i] ? rhs._slot[i]->clone() : NULL;
	}
	this->_name = rhs._name;
	return *this;
}

std::string const	&Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	int	i = 0;

	while (i < Character::_nbSlot && this->_slot[i])
		++i;
	if (i == Character::_nbSlot)
	{
		std::cout << this->_name << " couldn't equipe a " << m->getType() << " Materia" << std::endl;
		return ;
	}
	this->_slot[i] = m;
	std::cout << this->_name << " equiped a " << m->getType() << " Materia" << std::endl;

}
void	Character::unequip(int idx)
{
	if (this->_slot[idx])
		std::cout << this->_name << " unequiped a " << this->_slot[idx]->getType() << " Materia" << std::endl;
	this->_slot[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (!this->_slot[idx])
	{
		std::cout << this->_name << " has no materia on this slot" << std::endl;
		return ;
	}
	std::cout << this->_name << " ";
	this->_slot[idx]->use(target);
}

void	Character::printMat(void)
{	
	bool empty = true;

	std::cout << this->_name << "'s Inventory" << std::endl;
	for (int i = 0; i < Character::_nbSlot; i++)
	{
		if (this->_slot[i])
		{
			empty = false;
			std::cout << this->_slot[i]->getType() << std::endl;
		}
	}
	if (empty)
		std::cout << "Empty" << std::endl;
}
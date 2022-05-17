/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 05:02:21 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/17 05:57:27 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < MateriaSource::_nbMat; i++)
		this->_materia[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	for (int i = 0; i < MateriaSource::_nbMat; i++)
		this->_materia[i] = src._materia[i] ? src._materia[i]->clone() : NULL;

	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < MateriaSource::_nbMat; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
	return ;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &rhs)
{
	for (int i = 0; i < MateriaSource::_nbMat; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
		this->_materia[i] = rhs._materia[i] ? rhs._materia[i]->clone() : NULL;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	int	i = 0;

	while (i < MateriaSource::_nbMat && this->_materia[i])
		i++;
	if (i < MateriaSource::_nbMat)
		this->_materia[i] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MateriaSource::_nbMat; i++)
		if (this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	return NULL;
}

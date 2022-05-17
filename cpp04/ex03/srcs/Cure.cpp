/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 05:15:52 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/17 13:43:55 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure Default Constructor" << std::endl;
	return ;
}

Cure::Cure(const Cure &src) : AMateria(src.getType())
{
	std::cout << "Cure Copy Constructor" << std::endl;
	return ;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor" << std::endl;
	return ;
}

Cure	&Cure::operator=(const Cure &rhs)
{
	this->_type = rhs._type;
	return *this;
}

AMateria	*Cure::clone() const
{
	std::cout << "Cure Materia has been cloned" << std::endl;
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

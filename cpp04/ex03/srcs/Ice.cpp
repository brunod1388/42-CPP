/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 05:13:19 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/17 13:42:52 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice Default Constructor" << std::endl;
	return ;
}

Ice::Ice(const Ice &src) : AMateria(src.getType())
{
	std::cout << "Ice Copy Constructor" << std::endl;
	return ;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor" << std::endl;
	return ;
}

Ice & Ice::operator=(const Ice &rhs)
{
	this->_type = rhs._type;
	return *this;
}

AMateria* Ice::clone() const
{
	std::cout << "Ice Materia has been cloned" << std::endl;

	return new Ice(*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

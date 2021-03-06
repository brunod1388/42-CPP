/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:32:44 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/04 22:57:00 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_val = 0;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed & Fixed::operator= (const Fixed & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_val = rhs.getRawBits();;
	return *this;
}

int		Fixed::getRawBits(void) const
{
		std::cout << "getRawBits member function called" << std::endl;

	return this->_val;
}
void	Fixed::setRawBits(int const raw)
{
		std::cout << "getRawBits member function called" << std::endl;

	this->_val = raw;
}

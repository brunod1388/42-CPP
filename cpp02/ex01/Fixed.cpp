/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:32:44 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/05 01:14:12 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_val = 0;
	return;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_val = i << _fractBits;
	return;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_val = (int) roundf(f * (1 << _fractBits));
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

int		Fixed::toInt(void) const
{
	return this->_val >> _fractBits;
}

float	Fixed::toFloat(void) const
{
	return	(float) this->_val / (1 << _fractBits);
}

std::ostream & operator<<(std::ostream & os, Fixed const & rhs)
{
	os << rhs.toFloat();
	return os;
}

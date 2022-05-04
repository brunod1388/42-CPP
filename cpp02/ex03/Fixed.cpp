/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:32:44 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/05 01:10:52 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
{
	this->_val = 0;
	return;
}

Fixed::Fixed(int const i)
{
	this->_val = i << _fractBits;
	return;
}

Fixed::Fixed(float const f)
{
	this->_val = (int) roundf(f * (1 << _fractBits));
	return;
}

Fixed::~Fixed(void)
{
	return;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return;
}

Fixed & Fixed::operator= (const Fixed & rhs)
{
	this->_val = rhs.getRawBits();;
	return *this;
}

int		Fixed::getRawBits(void) const
{
	return this->_val;
}
void	Fixed::setRawBits(int const raw)
{
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

bool Fixed::operator<(const Fixed & rhs)
{
	return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator<=(const Fixed & rhs)
{
	return this->toFloat() <= rhs.toFloat();
}

bool Fixed::operator>(const Fixed & rhs) 
{
	return this->toFloat() > rhs.toFloat();
}

bool Fixed::operator>=(const Fixed & rhs)
{
	return this->toFloat() >= rhs.toFloat();
}

bool Fixed::operator==(const Fixed & rhs)
{
	return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator!=(const Fixed & rhs)
{
	return this->toFloat() != rhs.toFloat();
}

Fixed Fixed::operator+(const Fixed & rhs)
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed & rhs)
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed & rhs)
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed & rhs)
{
	return Fixed(this->toFloat() / rhs.toFloat());
}


Fixed & Fixed::operator++()
{
	++(this->_val);
	return *this;
}

Fixed & Fixed::operator--()
{
	--(this->_val);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed	old;
	old = *this;
	++(this->_val);
	return old;
}

Fixed Fixed::operator--(int)
{
	Fixed	old;
	old = *this;
	--(this->_val);
	return old;
}

Fixed Fixed::min(Fixed & a, Fixed & b)
{
	return (a.toFloat() < b.toFloat()) ? a : b;
}

Fixed Fixed::min(Fixed const & a, Fixed const & b)
{
	return (a.toFloat() < b.toFloat()) ? a : b;
}

Fixed Fixed::max(Fixed & a, Fixed & b)
{
	return (a.toFloat() > b.toFloat()) ? a : b;
}

Fixed Fixed::max(Fixed const & a, Fixed const & b)
{
	return (a.toFloat() > b.toFloat()) ? a : b;
}

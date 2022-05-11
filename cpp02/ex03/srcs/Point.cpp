/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 01:43:01 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/05 23:59:40 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iomanip>

Point::Point(void): _x(0), _y(0)
{
	return;
}

Point::Point(const Point &src): _x(src._x.toFloat()), _y(src._y.toFloat())
{
	return;
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
	return;
}

Point::~Point(void)
{
	return;
}

Point & Point::operator= (const Point &rhs)
{
	this->getX().setRawBits(rhs._x.getRawBits());
	this->getY().setRawBits(rhs._y.getRawBits());
	return *this;
}

Fixed	Point::getX(void) const
{
	return this->_x;
}

Fixed	Point::getY(void) const
{
	return this->_y;
}

void	Point::setX(const float x)
{
	this->getX().setRawBits(Fixed(x).getRawBits());
}

void	Point::setY(const float y)
{
	this->getY().setRawBits(Fixed(y).getRawBits());
}

std::ostream & operator<<(std::ostream &os, const Point &rhs)
{
	os << "(" << std::setprecision(3) << rhs.getX() << ", " << rhs.getY() << ")";
	return os;
}

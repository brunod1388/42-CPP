/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 01:43:01 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/05 03:10:31 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iomanip>

Point::Point(void)
{
	Fixed f(0.0f);

	this->_x = Fixed(0);
	this->_y = Fixed(0);
}

Point::Point(const Point &src)
{
	*this = src;
}

Point::Point(const float x, const float y)
{
	this->_x = Fixed(x);
	this->_y = Fixed(y);
}

Point::~Point(void)
{
	return;
}

Point & Point::operator= (const Point &rhs)
{
	this->_x = rhs._x;
	this->_y = rhs._y;
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
	this->_x = Fixed(x);
}

void	Point::setY(const float y)
{
	this->_y = Fixed(y);
}

std::ostream & operator<<(std::ostream &os, const Point &rhs)
{
	os << "(" << std::setprecision(2) << rhs.getX() << ", " << rhs.getY() << ")";
	return os;
}

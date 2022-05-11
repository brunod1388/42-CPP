/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 01:42:59 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/06 00:28:36 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point {

private:
	const Fixed _x;
	const Fixed _y;

public:
	Point(void);
	Point(const Point &src);
	Point(const float x, const float y);
	~Point(void);
	
	Point & operator= (const Point &rhs);

	Fixed	getX(void) const;
	Fixed	getY(void) const;
	void	setX(const float x);
	void	setY(const float y);
};

std::ostream & operator<<(std::ostream &os, const Point &rhs);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 01:54:45 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/05 23:58:09 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

static float	sign(Point const a, Point const b, Point const c)
{
	return (a.getX().toFloat() - c.getX().toFloat()) * (b.getY().toFloat() - c.getY().toFloat())
			- (b.getX().toFloat() - c.getX().toFloat()) * (a.getY().toFloat() - c.getY().toFloat());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	s1, s2, s3;
	bool	hasNeg;
	bool	hasPos;

	s1 = sign(point, a, b);
	s2 = sign(point, b, c);
	s3 = sign(point, c, a);
	hasNeg = (s1 < 0) || (s2 < 0) || (s3 < 0);
	hasPos = (s1 > 0) || (s2 > 0) || (s3 > 0);

	return !(hasNeg && hasPos);
}

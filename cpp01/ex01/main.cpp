/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 03:28:30 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/01 04:24:55 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*z, *zcpy;
	int		nb_zombie = 3;

	z = zombieHorde(3, "weshwesh");
	zcpy = z;
	for (int i = 0; i < nb_zombie; i++)
		(z++)->anounce();
	delete [] zcpy;
	return 0;
}
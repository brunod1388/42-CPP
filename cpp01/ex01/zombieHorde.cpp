/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 03:28:14 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/01 04:20:38 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, string name)
{
	Zombie *z = new Zombie[N];

	for (size_t i = 0; i < N; i++)
		z[i].set_name(name + std::to_string(i));
	return z;
}

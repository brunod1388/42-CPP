/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:01:16 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/15 00:39:55 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap default_sp = FragTrap();
	FragTrap fragKikou("fragKikou");
	FragTrap sp_copy(fragKikou);

	fragKikou.attack("sa mere");
	std::cout << fragKikou << std::endl;
	fragKikou.attack("son pere");
	fragKikou.highFivesGuys();
	fragKikou.attack("son frere");
	fragKikou.takeDamage(7);
	std::cout << fragKikou << std::endl;
	fragKikou.beRepaired(3);
	std::cout << fragKikou << std::endl;
	fragKikou.attack("sa mere");
	fragKikou.attack("son pere");
	fragKikou.attack("son frere");
	fragKikou.attack("Tout le monde");
	fragKikou.attack("Tout le monde");
	fragKikou.attack("Tout le monde");
	std::cout << fragKikou << std::endl;
	fragKikou.attack("Tout le monde");
	std::cout << fragKikou << std::endl;
	fragKikou.takeDamage(10);
	fragKikou.takeDamage(100);
	std::cout << fragKikou << std::endl;

	return 0;
}
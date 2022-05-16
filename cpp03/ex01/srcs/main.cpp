/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:01:16 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/15 19:23:58 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap default_sp = ScavTrap();
	ScavTrap scavKikou("scavKikou");
	ScavTrap sp_copy(scavKikou);

	scavKikou.attack("sa mere");
	std::cout << scavKikou << std::endl;
	scavKikou.attack("son pere");
	std::cout << scavKikou << std::endl;
	scavKikou.attack("son frere");
	scavKikou.takeDamage(7);
	std::cout << scavKikou << std::endl;
	scavKikou.guardGate();
	scavKikou.beRepaired(3);
	std::cout << scavKikou << std::endl;
	scavKikou.attack("sa mere");
	scavKikou.attack("son pere");
	scavKikou.attack("son frere");
	scavKikou.attack("Tout le monde");
	scavKikou.attack("Tout le monde");
	scavKikou.attack("Tout le monde");
	std::cout << scavKikou << std::endl;
	scavKikou.attack("Tout le monde");
	std::cout << scavKikou << std::endl;
	scavKikou.takeDamage(10);
	scavKikou.takeDamage(100);
	std::cout << scavKikou << std::endl;

	ScavTrap	test("test", 666, 666, 666);
	scavKikou = test;
	std::cout << scavKikou << std::endl;

	return 0;
}
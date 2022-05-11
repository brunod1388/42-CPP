/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:01:16 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/09 02:41:25 by brunodeoliv      ###   ########.fr       */
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
	std::cout << scavKikou << std::endl;
	scavKikou.takeDamage(7);
	scavKikou.guardGate();
	std::cout << scavKikou << std::endl;
	scavKikou.beRepaired(3);
	std::cout << scavKikou << std::endl;
	scavKikou.attack("sa mere");
	std::cout << scavKikou << std::endl;
	scavKikou.attack("son pere");
	std::cout << scavKikou << std::endl;
	scavKikou.attack("son frere");
	std::cout << scavKikou << std::endl;
	scavKikou.attack("Tout le monde");
	std::cout << scavKikou << std::endl;
	scavKikou.attack("Tout le monde");
	std::cout << scavKikou << std::endl;
	scavKikou.attack("Tout le monde");
	std::cout << scavKikou << std::endl;
	scavKikou.attack("Tout le monde");
	std::cout << scavKikou << std::endl;
	scavKikou.takeDamage(10);
	scavKikou.takeDamage(10);

	return 0;
}
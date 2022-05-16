/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:01:16 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 13:52:35 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap default_sp = DiamondTrap();
	DiamondTrap diamondKikou("diamondKikou");
	DiamondTrap sp_copy(diamondKikou);

	diamondKikou.attack("sa mere");
	std::cout << diamondKikou << std::endl;
	diamondKikou.attack("son pere");
	std::cout << diamondKikou << std::endl;
	diamondKikou.attack("son frere");
	std::cout << diamondKikou << std::endl;
	diamondKikou.takeDamage(7);
	diamondKikou.highFivesGuys();
	std::cout << diamondKikou << std::endl;
	diamondKikou.beRepaired(3);
	std::cout << diamondKikou << std::endl;
	diamondKikou.attack("sa mere");
	std::cout << diamondKikou << std::endl;
	diamondKikou.attack("son pere");
	std::cout << diamondKikou << std::endl;
	diamondKikou.attack("son frere");
	std::cout << diamondKikou << std::endl;
	diamondKikou.attack("Tout le monde");
	std::cout << diamondKikou << std::endl;
	diamondKikou.attack("Tout le monde");
	std::cout << diamondKikou << std::endl;
	diamondKikou.attack("Tout le monde");
	std::cout << diamondKikou << std::endl;
	diamondKikou.attack("Tout le monde");
	std::cout << diamondKikou << std::endl;
	diamondKikou.takeDamage(10);
	diamondKikou.takeDamage(10);

	diamondKikou.whoAmI();

	return 0;
}
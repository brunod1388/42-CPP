/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoncalv <bgoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:01:16 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/12 15:39:41 by bgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap default_sp = FragTrap();
	FragTrap fragKikou("fragKikou");
	FragTrap sp_copy(fragKikou);

	fragKikou.attack("sa mere");
	std::cout << fragKikou << std::endl;
	fragKikou.attack("son pere");
	std::cout << fragKikou << std::endl;
	fragKikou.attack("son frere");
	std::cout << fragKikou << std::endl;
	fragKikou.takeDamage(7);
	fragKikou.highFivesGuys();
	std::cout << fragKikou << std::endl;
	fragKikou.beRepaired(3);
	std::cout << fragKikou << std::endl;
	fragKikou.attack("sa mere");
	std::cout << fragKikou << std::endl;
	fragKikou.attack("son pere");
	std::cout << fragKikou << std::endl;
	fragKikou.attack("son frere");
	std::cout << fragKikou << std::endl;
	fragKikou.attack("Tout le monde");
	std::cout << fragKikou << std::endl;
	fragKikou.attack("Tout le monde");
	std::cout << fragKikou << std::endl;
	fragKikou.attack("Tout le monde");
	std::cout << fragKikou << std::endl;
	fragKikou.attack("Tout le monde");
	std::cout << fragKikou << std::endl;
	fragKikou.takeDamage(10);
	fragKikou.takeDamage(10);

	return 0;
}
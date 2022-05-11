/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:01:16 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/06 01:11:51 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap default_cp = ClapTrap();
	ClapTrap kikou("Kikou");
	ClapTrap cp_copy(kikou);

	cp_copy.setName("kikou cpy");
	std::cout << default_cp << std::endl;
	std::cout << kikou << std::endl;
	std::cout << cp_copy << std::endl;

	kikou.attack("sa mere");
	std::cout << kikou << std::endl;
	kikou.attack("son pere");
	std::cout << kikou << std::endl;
	kikou.attack("son frere");
	std::cout << kikou << std::endl;
	kikou.takeDamage(7);
	std::cout << kikou << std::endl;
	kikou.beRepaired(3);
	std::cout << kikou << std::endl;
	kikou.attack("sa mere");
	std::cout << kikou << std::endl;
	kikou.attack("son pere");
	std::cout << kikou << std::endl;
	kikou.attack("son frere");
	std::cout << kikou << std::endl;
	kikou.attack("Tout le monde");
	std::cout << kikou << std::endl;
	kikou.attack("Tout le monde");
	std::cout << kikou << std::endl;
	kikou.attack("Tout le monde");
	std::cout << kikou << std::endl;
	kikou.attack("Tout le monde");
	std::cout << kikou << std::endl;
	kikou.takeDamage(10);
	kikou.takeDamage(10);

	return 0;
}
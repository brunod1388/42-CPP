/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:08:56 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 00:04:33 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

protected:
	bool		_keeperMode;
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(std::string name, int hp, int ep, int att);
	ScavTrap(const ScavTrap &src);
	~ScavTrap(void);

	ScavTrap & operator=(const ScavTrap &src);
	bool		getKeeperMode(void) const;

	void		attack(const std::string& target);
	void		guardGate();
};

std::ostream & operator<<(std::ostream &os, const ScavTrap &rhs);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:08:56 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/06 02:27:44 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

private:
	std::string	_name;
	int			_hitPoint;
	int			_EnergyPoint;
	int			_attackDamage;
	bool		_keeperMode;
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ClapTrap &src);
	~ScavTrap(void);

	// ClapTrap & operator=(const ClapTrap &src);
	bool		getKeeperMode(void) const;

	void		attack(const std::string& target);
	void		guardGate();
};

std::ostream & operator<<(std::ostream &os, const ScavTrap &rhs);

#endif
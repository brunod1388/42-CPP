/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoncalv <bgoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:08:56 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/12 15:31:58 by bgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap {

protected:
	std::string	_name;
	int			_hitPoint;
	int			_EnergyPoint;
	int			_attackDamage;
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src);
	ClapTrap(std::string name, int hp, int ep, int dmg);
	~ClapTrap(void);

	ClapTrap & operator=(const ClapTrap &src);

	std::string	getName(void) const;
	int			getHP(void) const;
	int			getEnergy(void) const;
	int			getAttDmg(void) const;

	void		setName(const std::string name);
	void		setHP(const int hp);
	void		setEnergy(const int energy);
	void		setAttDmg(const int atDmg);

	void		attack(const std::string& target);
	void 		takeDamage(unsigned int amount);
	void 		beRepaired(unsigned int amount);
};

std::ostream & operator<<(std::ostream &os, const ClapTrap &rhs);

#endif
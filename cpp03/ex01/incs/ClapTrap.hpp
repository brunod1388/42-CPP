/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:08:56 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/06 00:58:41 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap {

private:
	std::string	_name;
	int			_hitPoint;
	int			_EnergyPoint;
	int			_attackDamage;
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src);
	~ClapTrap(void);

	ClapTrap & operator=(const ClapTrap &src);

	std::string	getName(void) const;
	int			getHP(void) const;
	int			getEnergy(void) const;
	int			getAttDmg(void) const;

	void		setName(const std::string name);
	void		setHP(const int hp);
	void		setEnergie(const int energy);
	void		setAttDmg(const int atDmg);

	void		attack(const std::string& target);
	void 		takeDamage(unsigned int amount);
	void 		beRepaired(unsigned int amount);
};

std::ostream & operator<<(std::ostream &os, const ClapTrap &rhs);

#endif
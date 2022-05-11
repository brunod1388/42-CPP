/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 00:08:56 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/09 02:52:43 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

private:
	std::string	_name;
	int			_hitPoint;
	int			_EnergyPoint;
	int			_attackDamage;
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const ClapTrap &src);
	~FragTrap(void);

	// ClapTrap & operator=(const ClapTrap &src);

	void		attack(const std::string& target);
	void		highFivesGuys(void);
};

std::ostream & operator<<(std::ostream &os, const FragTrap &rhs);

#endif
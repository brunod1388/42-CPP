/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:42:07 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/03 00:16:48 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
# define HumanB_HPP
# include <string>
# include "Weapon.hpp"

class HumanB {
	
private:

	std::string	name;
	Weapon	*weapon;

public:

	HumanB(std::string name);

	void	attack(void);
	void	setWeapon(Weapon &w);
};

#endif
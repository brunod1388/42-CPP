/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:42:07 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/01 23:30:37 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
# define HumanB_HPP
# include <string>
# include "Weapon.hpp"

using namespace std;

class HumanB {
	
private:

	string	name;
	Weapon	*weapon;

public:

	HumanB(string name);

	void	attack(void);
	void	setWeapon(Weapon &w);
};

#endif
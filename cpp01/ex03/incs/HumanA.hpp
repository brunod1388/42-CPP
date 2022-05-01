/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:42:07 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/01 16:09:57 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
# define HumanA_HPP
# include <string>
# include "Weapon.hpp"

using namespace std;

class HumanA {
	
private:

	string	name;
	Weapon	weapon;

public:

	HumanA(string name, Weapon w);

	void	attack(void);
	void	setWeapon(Weapon w);
	void	getWeapon(void);

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:42:09 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/01 23:55:03 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

using namespace std;

class Weapon
{
private:

	string	type;

public:

	Weapon(string type);
	~Weapon(void);

	string	getType(void);
	void	setType(string type);
};

#endif
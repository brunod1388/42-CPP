/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:42:07 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/03 00:16:31 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
# define HumanA_HPP
# include <string>
# include "Weapon.hpp"

class HumanA {

private:

	std::string	name;
	Weapon		*weapon;

public:

	HumanA(std::string name, Weapon &w);
	~HumanA(void);

	void	attack(void);

};

#endif
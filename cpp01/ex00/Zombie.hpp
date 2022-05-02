/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 03:28:24 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/03 00:00:00 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie {

private:

	std::string	name;

public:

	Zombie(std::string name);
	~Zombie(void);

	void	anounce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif

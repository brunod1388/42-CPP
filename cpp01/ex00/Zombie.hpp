/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 03:28:24 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/01 04:04:18 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

using namespace std;

class Zombie {

private:

	string	name;

public:

	Zombie(string name);
	~Zombie(void);

	void	anounce(void);
};

void	randomChump(string name);
Zombie	*newZombie(string name);

#endif

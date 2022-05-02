/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 03:28:24 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/03 00:02:52 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie {

private:

	string	name;

public:

	void	set_name(std::string name);
	std::string	get_name(void);
	Zombie(std::string name);
	Zombie(void) {};
	~Zombie(void);

	void	anounce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif

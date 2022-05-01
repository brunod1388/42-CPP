/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 03:28:24 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/01 04:20:32 by brunodeoliv      ###   ########.fr       */
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

	void	set_name(string name);
	string	get_name(void);
	Zombie(string name);
	Zombie(void) {};
	~Zombie(void);

	void	anounce(void);
};

Zombie	*zombieHorde(int N, string name);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:15:47 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 01:36:26 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include "Animal.hpp"

class Dog : public Animal {

public:
	Dog(void);
	Dog(const Dog &src);
	~Dog(void);

	virtual void	makeSound(void) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:15:47 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 14:15:16 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

private:
	Brain	*brain;

public:
	Dog(void);
	Dog(const Dog &src);
	~Dog(void);

	Dog		&operator=(const Dog &rhs);
	AAnimal	&operator=(const AAnimal &rhs);

	virtual void	makeSound(void) const;
	
	virtual Brain	*getBrain(void) const;
};

#endif
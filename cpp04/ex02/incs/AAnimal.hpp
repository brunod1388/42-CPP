/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:15:47 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 14:22:43 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal {

protected:
	std::string type;
	
public:

	virtual	~AAnimal(void);

	virtual	AAnimal & operator=(const AAnimal &rhs) = 0;

	virtual void	makeSound(void) const = 0;

	std::string		getType(void) const;
	virtual Brain	*getBrain(void) const = 0;
};

#endif
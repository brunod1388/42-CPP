/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:15:47 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 14:07:00 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

private:
	Brain	*brain;

public:
	Cat(void);
	Cat(const Cat &src);
	~Cat(void);

	Cat				&operator=(const Cat &rhs);
	virtual AAnimal	&operator=(const AAnimal &rhs);

	virtual void	makeSound(void) const;

	virtual Brain	*getBrain(void) const;
};

#endif
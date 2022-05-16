/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:15:47 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 02:16:26 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

private:
	Brain	*brain;

public:
	Cat(void);
	Cat(const Cat &src);
	~Cat(void);

	Cat & operator=(const Cat &rhs);

	virtual void	makeSound(void) const;

	Brain			*getBrain(void) const;
};

#endif
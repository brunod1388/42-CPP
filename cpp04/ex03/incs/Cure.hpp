/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 05:18:59 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/17 05:19:34 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{

public:

	Cure(void);
	Cure(const Cure &src);
	~Cure(void);

	Cure & operator=(const Cure &rhs);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif

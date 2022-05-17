/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 05:19:03 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/17 05:19:42 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice :  public AMateria{

public:

	Ice(void);
	Ice(const Ice &src);
	~Ice(void);

	Ice & operator=(const Ice &rhs);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif

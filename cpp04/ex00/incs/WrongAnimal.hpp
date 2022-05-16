/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:15:47 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 01:23:54 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

protected:
	std::string type;
	
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &src);
	~WrongAnimal(void);

	WrongAnimal & operator=(const WrongAnimal &rhs);

	void	makeSound(void) const;
	std::string		getType(void) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 00:25:54 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/16 00:37:40 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor" << std::endl;
	return;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy Constructor" << std::endl;
	*this = src;
	return;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor" << std::endl;
	return;
}

Brain & Brain::operator=(const Brain &rhs)
{
	std::cout << "Assignement Animal" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

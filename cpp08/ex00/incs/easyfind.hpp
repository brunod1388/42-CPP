/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:22:22 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/22 02:37:44 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template<typename T>
typename T::iterator	easyfind(T	&container, int n)
{
	// typename T::iterator	it = std::find(container.begin(), container.end(), n);
	// return it;
	for(typename T::iterator it = container.begin(); it != container.end(); it++)
		if (*it == n)
			return it;
	return container.end();
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 03:23:13 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/21 03:29:58 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b)
{
	T c = a;

	a = b;
	b = c;
}

template <typename T>
const T	&min(const T &a, const T &b)
{
	return (a < b ? a : b);
}

template <typename T>
const T	&max(const T &a, const T &b)
{
	return (a > b ? a : b);
}

#endif
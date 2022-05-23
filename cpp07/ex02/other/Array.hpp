/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:32:28 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/21 23:24:57 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <iostream>

template<typename T>
class Array {

private:
	T	*_array;
	int	_size;

public:

	Array<T>(void);
	Array<T>(int size);
	Array<T>(const Array<T> &src);
	~Array<T>(void);

	Array<T>	&operator=(const Array<T> &rhs);
	T			&operator[](const int i);

	int			size(void);
};

template<typename T>
std::ostream	&operator<<(std::ostream &os, const Array<T> &rhs);

#endif

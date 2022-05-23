/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:32:28 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/22 00:42:19 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {

private:
	int	_size;
	T	*_array;

public:
	Array<T>(void) : _size(0), _array(NULL) {}
	Array<T>(int size) : _size(size)
	{
		if (size < 0)
			throw std::out_of_range("Range should be positive.");
		this->_array = size ? new T[size] : NULL;
	}
	Array<T>(const Array<T> &src) { *this = src; }
	~Array<T>(void)
	{
		if (this->_size)
			delete[] _array;
	}
	T			&operator[](const int i) const
	{
		if (i < 0 || this->_size <= i)
			throw std::out_of_range("Index not in the size range of Array");
		return this->_array[i];
	}
	Array<T>	&operator=(const Array<T> &rhs)
	{
		if (this == &rhs)
			return *this;
		if (this->_size > 0)
			delete[] this->_array;
		this->_size = rhs.size();
		this->_array = new T[this->_size];
		for (int i = 0; i < this->_size; i++)
			this->_array[i] = rhs[i];
		return *this;
	}

	int			size(void) const { return this->_size; }
};

template<typename T>
std::ostream	&operator<<(std::ostream &os, const Array<T> &rhs)
{
	os << "{";
	for (int i = 0; i < rhs.size(); i++)
	{
		os << rhs[i] << (i < (rhs.size() - 1) ? ", " : "");
	}
	os << "}";
	return os;
}
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:52:44 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/21 23:47:30 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

template<typename T>
Array<T>::Array(void) :
	_size(0),
	_array(NULL)
{
	return ;
}

template<typename T>
Array<T>::Array(int size) :
	_size(size),
	_array(new T[size])
{
	return ;
}

template<typename T>
Array<T>::Array(const Array<T> &src)
{
	*this = src;
}

template<typename T>
Array<T>::~Array(void)
{
	delete[] this->_array;
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array<T> &rhs)
{
	this->_size = rhs._size;
	for (int i = 0; i < rhs._size; i++)
		this->_array[i] = rhs._array[i];
	return *this;
}

template<typename T>
T	&Array<T>::operator[](const int i)
{
	if (i < 0 || this->_size <= i)
		throw std::out_of_range("Index not in the size range of Array");
	return this->_array[i];
}

template<typename T>
int			Array<T>::size(void)
{
	return this->_size;
}

template<typename T>
std::ostream	&operator<<(std::ostream &os, const Array<T> &rhs)
{
	os << "{";
	for (int i = 0; i < rhs.size(); i++)
	{
		os << rhs[i] << (i < (rhs.size() - 1) ? ", " : "");
	}
	os << "}";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 03:08:24 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/22 04:33:33 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span(void)
{
	return ;
}

Span::Span(size_t n) : _size(n)
{
	return ;
}

Span::Span(const Span &src)
{
	*this = src;
	return ;
}

Span::~Span(void)
{
	return ;
}

Span & Span::operator=(const Span &rhs)
{
	this->_size = rhs._size;
	if (!this->_content.empty())
		this->_content.erase(this->_content.begin(), this->_content.end());
	this->_content = rhs._content;
	return *this;
}

size_t	Span::getSize(void)
{
	return this->_size;
}

void	Span::addNumber(int n)
{
	if (this->_content.size() == this->_size)
		throw std::overflow_error("Your Span is full");
	this->_content.push_back(n);
}

int	Span::shortestSpan(void)
{
	std::vector<int>	l = this->_content;
	int					min = INT_MAX;
	sort(l.begin(), l.end());
	
	for (size_t i = 0; i < l.size() - 1; i++)
	{
		int tmp = abs(this->_content[i] - this->_content[i + 1]);
		if (tmp < min)
			min = tmp;
	}
	return min;
}

int	Span::longestSpan(void)
{
	int	min = *std::min_element(this->_content.begin(), this->_content.end());
	int	max = *std::max_element(this->_content.begin(), this->_content.end());
	
	return max - min;
}

void	Span::randomFill(int max)
{
	size_t n = this->_content.size();
	srand(time(0));
	while (n++ < this->_size)
		this->_content.push_back(rand() % max);
}

std::ostream	&operator<<(std::ostream &os, const Span &rhs)
{
	rhs._content.begin();
	os << "{ ";
	for (std::vector<int>::const_iterator it = rhs._content.begin() ; it != rhs._content.end() ; it++)
		os << *it << " ";
	os << "}";
	return os;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 03:08:27 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/22 04:32:29 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>

class Span {

private:

	size_t				_size;
	std::vector<int>	_content;

	Span(void);

public:

	Span(size_t n);
	Span(const Span &src);
	~Span(void);

	Span & operator=(const Span &rhs);

	size_t	getSize(void);

	void	addNumber(int n);
	int		shortestSpan(void);
	int		longestSpan(void);
	void	randomFill(int max = INT_MAX);

	friend std::ostream	&operator<<(std::ostream &os, const Span &rhs);
};


#endif

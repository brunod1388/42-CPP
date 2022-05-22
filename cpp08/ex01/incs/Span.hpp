/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 03:08:27 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/22 04:17:12 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>

class Span {

private:

	int					_size;
	std::vector<int>	_content;

	Span(void);

public:

	Span(int n);
	Span(const Span &src);
	~Span(void);

	Span & operator=(const Span &rhs);

	int		getSize(void);

	void	addNumber(int n);
	int		shortestSpan(void);
	int		longestSpan(void);
	void	randomFill(int max = INT_MAX);

	friend std::ostream	&operator<<(std::ostream &os, const Span &rhs);
};


#endif

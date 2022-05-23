/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 03:31:56 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/21 03:49:12 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	printS(const std::string &s)
{
	std::cout << "string : " << s << std::endl;
}

void	printI(const int &i)
{
	std::cout << "int : " << i << std::endl;
}

int main(void)
{
	std::string	s[3] = {"kikou", "42", "lol"};
	int			i[5] = {1, 2, 3, 4, 556};

	::iter(s, 3, &printS);
	::iter(i, 5, printI);

	return 0;
}
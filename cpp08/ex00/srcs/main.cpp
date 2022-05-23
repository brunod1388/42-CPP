/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:22:20 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/22 02:41:37 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

#include "easyfind.hpp"

int main(void)
{
	std::list<int>	l;
	for (int i = 0; i < 15; i++)
		l.push_back(i*10);
	
	for (int i = 0; i < 13; i++)
	{
		std::list<int>::iterator it = easyfind(l, i);
		std::cout << "easyfind " << i << " result : " << *it << std::endl;
	}

	return 0;
}
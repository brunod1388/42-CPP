/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 01:05:01 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/03 00:29:35 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

std::string	levelarr[4] = {"debug", "info", "warning", "error"};

bool islevel(std::string level)
{
	for (int i = 0; i < 4; i++)
		if (level.compare(levelarr[i]) == 0)
			return true;
	return false;
}

int main(int argc, char **argv)
{
	Harl	h;
	bool	to_display = false;

	if (argc != 2)
	{
		std::cout << "Usage : ./harlFilter <level> with level being; debug, info, warning, error" << std::endl;
		exit(1);
	}
	if (!islevel(argv[1]))
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		exit(0);
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (levelarr[i].compare(argv[1]) == 0)
			to_display = true;
		if (to_display)
		{
			std::cout << std::endl << "[ " << levelarr[i] << " ]" << std::endl;
			h.complain(levelarr[i]);
		}
	}
	return 0;
}

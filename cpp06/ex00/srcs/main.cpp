/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:53:51 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/20 23:48:10 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeAnalyser.hpp"
#include <iostream>

void	input_mode(TypeAnalyser &tAn)
{
	char	s[32] = "";

	while (s[0] != 'q')
	{
		std::cout << "Enter something : ";
		std::cin >> s;
		tAn.analyseInput(s);
		tAn.displayTypes();
	}
}

void	arg_mode(TypeAnalyser &tAn, int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		tAn.analyseInput(argv[i]);
		tAn.displayTypes();
	}
}

int main(int argc, char **argv)
{
	TypeAnalyser tAn;

	try {
		if (argc == 1)
			throw TypeAnalyser::EmptyInput();
		if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'i')
			input_mode(tAn);
		else
			arg_mode(tAn, argc, argv);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		usageMessage();
	}
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 01:49:32 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/20 23:47:56 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <cstdlib>
#include <limits>
#include <iostream>

void	usageMessage(void)
{
	std::cout << "Usage : ./convert {char, int, float, double}" << std::endl;
	exit(0);
}

bool	isIntable(double d)
{
	return	d > std::numeric_limits<int>::min() &&
			d < std::numeric_limits<int>::max();
}

bool	isFloatable(double d)
{
	return	(d > std::numeric_limits<float>::min() &&
			d < std::numeric_limits<float>::max()) ||
			(d < -std::numeric_limits<float>::min() &&
			d > -std::numeric_limits<float>::max());
}

static bool	isNumeric(char c)
{
	return '0' <= c && c <= '9';
}

bool	isSpecial(std::string s)
{
	return	!(s.compare("nan") && s.compare("+inf") && s.compare("-inf"));
}

bool	isSpecialf(std::string s)
{
	return !(s.compare("nanf") && s.compare("+inff") && s.compare("-inff"));
}

e_type	defineType(char *input)
{
	if (!input || !input[0])
		return no_type;
	if (isSpecial(std::string(input)))
		return double_type;
	if (isSpecialf(std::string(input)))
		return float_type;
	if (!isNumeric(*input) && !input[1])
		return char_type;
	if (*input == '-' || *input == '+')
		input++;
	if (!isNumeric(*input))
		return no_type;
	while (*input && isNumeric(*input))
		input++;
	if (!input[0])
		return int_type;
	if (input[0] == 'f' && !input[1])
		return float_type;
	if (*input++ != '.')
		return no_type;
	while (*input && isNumeric(*input))
		input++;
	if (!input[0])
		return double_type;
	if (input[0] == 'f' && !input[1])
		return float_type;
	return no_type;
}


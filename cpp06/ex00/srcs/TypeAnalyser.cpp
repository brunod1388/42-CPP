/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeAnalyser.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 01:40:00 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/20 23:52:18 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "TypeAnalyser.hpp"

TypeAnalyser::TypeAnalyser(void)
{
	this->_input = "";
	this->_val = 0;
	this->_type = no_type;
	return ;
}

TypeAnalyser::TypeAnalyser(const TypeAnalyser &src)
{
	*this = src;
	return ;
}

TypeAnalyser::~TypeAnalyser(void)
{
	return ;
}

TypeAnalyser & TypeAnalyser::operator=(const TypeAnalyser &rhs)
{
	this->_input = rhs._input;
	this->_val = rhs._val;
	this->_type = rhs._type;

	return *this;
}

void	TypeAnalyser::analyseInput(char *input)
{
	if (!input || !input[0])
		throw TypeAnalyser::EmptyInput();
	this->_input = input;
	this->_type = defineType(input);
	if (this->_type == no_type)
		throw TypeAnalyser::NoTypeInput();
	if (this->_type == char_type)
		this->_val = input[0];
	else
		this->_val = atof(input);
}

void	TypeAnalyser::printChar(void)
{
	if (isSpecial(this->_input) || isSpecialf(this->_input) || !(0 <= this->_val && this->_val < 127))
		std::cout << "impossible";
	else if (!(31 <= this->_val && this->_val < 127))
		std::cout << "Not displayable";
	else
		std::cout << static_cast<char>(this->_val);
}

void	TypeAnalyser::printInt(void)
{
	if (isSpecial(this->_input) || isSpecialf(this->_input) || !isIntable(this->_val))
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(this->_val);
}

void	TypeAnalyser::printFloat(void)
{
	double	f = static_cast<float>(this->_val);
	double	dec;

	if (isSpecialf(this->_input) || isSpecial(this->_input))
	{
		std::cout << this->_input << (isSpecial(this->_input) ? "f" : "");
		return ;
	}
	if (isFloatable(this->_val))
		std::cout << f << ((modf(f, &dec) || abs(f) >= 1000000)? "" : ".0") << "f";
	else
		std::cout << "impossible";
}

void	TypeAnalyser::printDouble(void)
{
	double	d = this->_val;
	double	dec;

	if (isSpecialf(this->_input) || isSpecial(this->_input))
	{
		std::cout << (isSpecial(this->_input) ? this->_input : this->_input.substr(0, this->_input.length() - 1)) ;
		return ;
	}
	std::cout << this->_val << ((modf(d, &dec) || abs(d) >= 1000000) ? "" : ".0");
}

void	TypeAnalyser::displayTypes(void)
{
	std::cout << std::endl;
	if (!this->_input.compare("")) throw TypeAnalyser::EmptyInput();
	if (this->_type == no_type) throw TypeAnalyser::NoTypeInput();
	std::cout << "char : "; this->printChar(); std::cout << std::endl;
	std::cout << "int : "; this->printInt(); std::cout << std::endl;
	std::cout << "float : "; this->printFloat(); std::cout << std::endl;
	std::cout << "double : "; this->printDouble(); std::cout << std::endl;
}

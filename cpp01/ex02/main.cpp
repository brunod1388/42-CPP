/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:24:43 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/03 00:16:05 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>


int main(void)
{
	std::string	s = "HI THIS IS BRAIN";
	std::string	*stringPTR = &s;
	std::string	&stringREF = s;

	std::cout << "mem addr of string    : " << &s << " value : " << s << std::endl;
	std::cout << "mem addr of stringPTR : " << &stringPTR << " value : " << *stringPTR << std::endl;
	std::cout << "mem addr of stringREF : " << &stringREF << " value : " << *stringPTR << std::endl;

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:24:43 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/01 15:34:21 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>


using namespace std;

int main(void)
{
	string	s = "HI THIS IS BRAIN";
	string	*stringPTR = &s;
	string	&stringREF = s;

	cout << "mem addr of string    : " << &s << " value : " << s << endl;
	cout << "mem addr of stringPTR : " << &stringPTR << " value : " << *stringPTR <<  endl;
	cout << "mem addr of stringREF : " << &stringREF << " value : " << *stringPTR <<  endl;

	return 0;
}
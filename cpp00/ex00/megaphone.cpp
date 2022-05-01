/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoncalv <bgoncalv@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 23:31:08 by bgoncalv          #+#    #+#             */
/*   Updated: 2022/03/16 00:31:55 by bgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return 0;
	}
	while (--argc)
	{
		argv++;
		for(size_t i = 0; i < strlen(*argv); i++)
			(*argv)[i] = toupper((*argv)[i]);
		cout << *argv;
	}
	cout << endl;
	return 0;
}
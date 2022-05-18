/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:51:28 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/18 20:52:27 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	// Bureaucrat::verbose = true;
	try
	{
		Bureaucrat	bur = Bureaucrat();

		bur.increment();
		std::cout << bur << std::endl;
		bur.decrement();
		std::cout << bur << std::endl;
		bur.increment(50);
		std::cout << bur << std::endl;
		bur.increment(50);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPETION : " << e.what() << std::endl;
	}

	std::cout << std::endl;


	try
	{
		Bureaucrat	bob("Kikou", 54);

		bob.increment();
		std::cout << bob << std::endl;
		bob.decrement();
		std::cout << bob << std::endl;
		bob.decrement(50);
		std::cout << bob << std::endl;
		bob.decrement(50);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPETION : " << e.what() << std::endl;
	}

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:51:28 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/19 00:25:57 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	// Bureaucrat::verbose = true;
	// Form::verbose = true;
	try
	{
		Form	f("fail", 100, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPETION : " << e.what() << std::endl;
	}

	try
	{
		Form	f("fail", 0, 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPETION : " << e.what() << std::endl;
	}

	try
	{
		Form	f("fail", 1000, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPETION : " << e.what() << std::endl;
	}

	try
	{
		Form	f("fail", 1, 1000);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPETION : " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat	kikou("Kikou", 54);
		Bureaucrat	bob("bob", 120);
		Form		form("42", 64, 90);

		std::cout << bob << std::endl;
		std::cout << form << std::endl;
		bob.signForm(form);
		std::cout << kikou << std::endl;
		std::cout << form << std::endl;
		kikou.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPETION : " << e.what() << std::endl;
	}

	return 0;
}
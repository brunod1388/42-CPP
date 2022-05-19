/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:51:28 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/19 02:24:21 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	// Bureaucrat::verbose = true;
	// Form::verbose = true;

	try
	{
		Bureaucrat				boss("Big Boss", 1);
		Bureaucrat				kikou("Kikou", 13);
		Bureaucrat				bob("Bob", 120);
		PresidentialPardonForm	pardonForm("Kikou");
		RobotomyRequestForm		robotForm("Kikou");
		ShrubberyCreationForm	shrubForm("Kikou");

		std::cout << std::endl;
		std::cout << boss << std::endl;
		std::cout << kikou << std::endl;
		std::cout << bob << std::endl << std::endl;
		std::cout << pardonForm << std::endl;
		
		bob.signForm(pardonForm);
		std::cout << pardonForm << std::endl;
		bob.executeForm(pardonForm);
		kikou.signForm(pardonForm);
		kikou.executeForm(pardonForm);
		boss.signForm(pardonForm);
		boss.executeForm(pardonForm);
		std::cout << std::endl;

		std::cout << robotForm << std::endl;
		boss.signForm(robotForm);
		boss.executeForm(robotForm);
		boss.executeForm(robotForm);
		boss.executeForm(robotForm);
		boss.executeForm(robotForm);
		boss.executeForm(robotForm);
		boss.executeForm(robotForm);
		boss.executeForm(robotForm);
		boss.executeForm(robotForm);
		std::cout << std::endl;

		std::cout << shrubForm << std::endl;
		std::cout << std::endl;
		bob.signForm(shrubForm);
		std::cout << shrubForm << std::endl;
		boss.signForm(shrubForm);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPTION : " << e.what() << std::endl;
	}

	// while(42);
	return 0;
}
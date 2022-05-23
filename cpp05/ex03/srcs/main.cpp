/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:51:28 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/19 20:13:23 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	// Bureaucrat::verbose = true;
	// Form::verbose = true;
	// Intern::verbose = true;

	try
	{
		Bureaucrat	boss("Big Boss", 1);
		Bureaucrat	bob("Bob", 120);
		Intern		kikou;
		Form		*f[4];

		std::cout << kikou << std::endl;
		f[0] = kikou.makeForm("ShrubberyCreationForm", "KIKOU");
		f[1] = kikou.makeForm("RobotomyRequestForm", "KIKOU");
		f[2] = kikou.makeForm("PresidentialPardonForm", "KIKOU");
		f[3] = kikou.makeForm("noForm", "KIKOU");
		std::cout << std::endl;
		boss.signForm(*f[1]);
		std::cout << std::endl;
		f[1]->execute(boss);
		std::cout << std::endl;
		bob.executeForm(*f[2]);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPTION : " << e.what() << std::endl;
	}

	// while(42);
	return 0;
}
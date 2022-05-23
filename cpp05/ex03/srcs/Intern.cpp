/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 02:33:03 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/19 20:05:08 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

bool Intern::verbose = false;

Intern::Intern(void)
{
	if (Intern::verbose)
		std::cout << "Intern Default constructor" << std::endl;
	return ;
}

Intern::Intern(const Intern &src)
{
	(void)src;
	if (Intern::verbose)
		std::cout << "Intern Copy constructor" << std::endl;
	return ;
}

Intern::~Intern(void)
{
	if (Intern::verbose)
		std::cout << "Intern Destructor" << std::endl;
	return ;
}

Intern & Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	if (Intern::verbose)
		std::cout << "InternAssignement operator" << std::endl;
	return *this;
}
std::ostream &operator<<(std::ostream &os, const Intern &rhs)
{
	(void) rhs;
	os << "Intern";
	return os;
}

Form	*Intern::makeForm(const std::string &name, const std::string &target) const
{
	struct s_hashForm {
		std::string	name;
		Form		*f;;
	};

	s_hashForm	hForm[3] = {{"ShrubberyCreationForm", new ShrubberyCreationForm(target)},
							{"RobotomyRequestForm", new RobotomyRequestForm(target)},
							{"PresidentialPardonForm", new PresidentialPardonForm(target)}};
	Form	*f = NULL;;
	
	for (int i = 0; i < 3; i++)
		if(hForm[i].name == name)
			f = hForm[i].f;
		else
			delete hForm[i].f;
	if (f)
		std::cout << "Intern creates " << name << std::endl;
	else
		std::cout << "Intern could not find the form..." << std::endl;
	return f;
}

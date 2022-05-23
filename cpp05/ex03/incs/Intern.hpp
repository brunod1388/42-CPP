/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:54:19 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/19 22:05:53 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern {

public:

	static bool	verbose;

	Intern(void);
	Intern(const Intern &src);
	~Intern(void);

	Intern & operator=(const Intern &rhs);

	Form	*makeForm(const std::string &name, const std::string &target) const;
};

std::ostream &operator<<(std::ostream &os, const Intern &rhs);

#endif

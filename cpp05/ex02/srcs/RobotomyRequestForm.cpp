/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:57:39 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/19 02:21:42 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) :
	Form("RobotomyRequestForm", 72, 45),
	_target("")
{
	if (Form::verbose)
		std::cout << "Default RobotomyRequestForm constructor (" << *this << ")" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
	Form("RobotomyRequestForm", 72, 45),
	_target(target)
{
	if (Form::verbose)
		std::cout << "RobotomyRequestForm constructor (" << *this << ")" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
	Form("RobotomyRequestForm", 72, 45),
	_target(src.getTarget())
{
	if (Form::verbose)
		std::cout << "RobotomyRequestForm Copy constructor (" << *this << ")" << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	if (Form::verbose)
		std::cout << "RobotomyRequestForm destructor (" << *this << ")" << std::endl;
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	std::cout << "Can't copy anything with " << rhs.getName() << std::endl;
	if (Form::verbose)
		std::cout << "RobotomyRequestForm Assignement operator (" << *this << ")" << std::endl;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned() || executor.getGrade() > this->getGradeToEx())
		throw RobotomyRequestForm::ExecutionException();
	std::cout << "*** DRILING NOISE ***." << std::endl;
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "The robotization failed... " << this->_target << " exploded..." << std::endl;
}

const std::string	&RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}

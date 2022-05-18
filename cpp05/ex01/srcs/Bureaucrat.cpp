/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:51:33 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/18 23:59:47 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

bool Bureaucrat::verbose = false;

Bureaucrat::Bureaucrat(void):
	_name("Bob"),
	_grade(GRADE_DEFAULT)
{
	if (Bureaucrat::verbose)
		std::cout << "Default constructor (" << *this << ")" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade):
	_name(name),
	_grade(grade)
{
	if (Bureaucrat::verbose)
		std::cout << "Default constructor (" << *this << ")" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
	if (Bureaucrat::verbose)
		std::cout << "Copy constructor (" << *this << ")" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	if (Bureaucrat::verbose)
		std::cout << "Destructor" << std::endl;
	return ;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs._grade;
	if (Bureaucrat::verbose)
		std::cout << "Assignement operator (" << *this << ")" << std::endl;
	return *this;
}

const std::string	&Bureaucrat::getName(void) const
{
	return this->_name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void	Bureaucrat::checkGrade(void) const
{
	if (this->_grade < GRADE_MAX)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > GRADE_MIN)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::increment(int n)
{
	this->_grade -= n;
	checkGrade();
	std::cout << this->_name << " has been upgraded by " << n << " grades." << std::endl;
}

void	Bureaucrat::decrement(int n)
{
	this->_grade += n;
	checkGrade();
	std::cout << this->_name << " has been downgraded by " << n << " grades." << std::endl;
}

bool	Bureaucrat::signForm(Form &f) const
{
	if (f.beSigned(*this))
	{
		std::cout << this->getName() << " signed " << f.getName() << " Form." << std::endl;
		return true;
	}
	std::cout << this->getName() << "couldn't sign " << f.getName()
		<< " because grade needed to sign is " << f.getGradeToSign()  << std::endl;
	return false;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return os;
}


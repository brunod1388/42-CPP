/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 22:15:23 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/18 23:59:52 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

bool Form::verbose = false;

Form::Form(void):
	_name("Bob"),
	_signed(false),
	_gradeToSign(GRADE_DEFAULT),
	_gradeToEx(GRADE_DEFAULT)
{
	if (Form::verbose)
		std::cout << "Default Form constructor (" << *this << ")" << std::endl;
	return ;
}

Form::Form(const std::string name, int gradeToSign, int gradeToEx):
	_name(name),
	_signed(false),
	_gradeToSign(gradeToSign),
	_gradeToEx(gradeToEx)
{
	checkGrade();
	if (Form::verbose)
		std::cout << "Generic Form constructor (" << *this << ")" << std::endl;
	return ;
}

Form::Form(const Form &src):
	_name(src._name),
	_signed(false),
	_gradeToSign(src._gradeToSign),
	_gradeToEx(src._gradeToEx)
{
	checkGrade();
	if (Form::verbose)
		std::cout << "Copy Form constructor (" << *this << ")" << std::endl;
	return ;
}

Form::~Form(void)
{
	if (Form::verbose)
		std::cout << "Form destructor (" << *this << ")" << std::endl;
	return ;
}

Form & Form::operator=(const Form &rhs)
{
	this->_signed = rhs._signed;
	std::cout << "Only signed is copied, the others arguments are const" << std::endl;
	if (Form::verbose)
		std::cout << "Form Assignement operator (" << *this << ")" << std::endl;
	return *this;
}

const std::string	&Form::getName(void) const
{
	return this->_name;
}

bool	Form::getSigned(void) const
{
	return this->_signed;
}

int	Form::getGradeToSign(void) const
{
	return this->_gradeToSign;
}

int	Form::getGradeToEx(void) const
{
	return this->_gradeToEx;
}

bool	Form::beSigned(const Bureaucrat &bob)
{
	if (bob.getGrade() <= this->getGradeToSign())
	{
		this->_signed = true;
		return true;
	}
	return false;
}

void	Form::checkGrade() const
{
	if (this->_gradeToEx < GRADE_MAX || this->_gradeToSign < GRADE_MAX)
		throw Form::GradeTooHighException();
	if (this->_gradeToEx > GRADE_MIN || this->_gradeToSign > GRADE_MIN)
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &rhs)
{
	os << "Form " << rhs.getName() << ", signed : " << rhs.getSigned() << ", gradeToSign : " << rhs.getGradeToSign() << ", gradeToEx : " << rhs.getGradeToEx();
	return os;
}


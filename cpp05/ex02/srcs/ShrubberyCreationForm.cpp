/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:34:50 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/19 01:39:24 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("ShrubberyCreationForm", 145, 137),
	_target("")
{
	if (Form::verbose)
		std::cout << "Default ShrubberyCreationForm constructor (" << *this << ")" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
	Form("ShrubberyCreationForm", 145, 137),
	_target(target)
{
	if (Form::verbose)
		std::cout << "ShrubberyCreationForm constructor (" << *this << ")" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
	Form("ShrubberyCreationForm", 145, 137),
	_target(src.getTarget())
{
	if (Form::verbose)
		std::cout << "ShrubberyCreationForm Copy constructor (" << *this << ")" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	if (Form::verbose)
		std::cout << "ShrubberyCreationForm destructor (" << *this << ")" << std::endl;
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	std::cout << "Can't copy anything with " << rhs.getName() << std::endl;
	if (Form::verbose)
		std::cout << "ShrubberyCreationForm Assignement operator (" << *this << ")" << std::endl;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned() || executor.getGrade() > this->getGradeToEx())
		throw ShrubberyCreationForm::ExecutionException();

	std::ofstream	outfile;
	outfile.open(this->_target + "_shrubbery", std::ios::out);
	outfile << "                     . . ." << std::endl;
	outfile << "                   .        .  .     ..    ." << std::endl;
	outfile << "                .                 .         .  ." << std::endl;
	outfile << "                                ." << std::endl;
	outfile << "                               .                .." << std::endl;
	outfile << "               .          .            .              ." << std::endl;
	outfile << "               .            '.,        .               ." << std::endl;
	outfile << "               .              'b      *" << std::endl;
	outfile << "                .              '$    #.                .." << std::endl;
	outfile << "               .    .           $:   #:               ." << std::endl;
	outfile << "             ..      .  ..      *#  @):        .   . ." << std::endl;
	outfile << "                          .     :@,@):   ,.**:'   ." << std::endl;
	outfile << "              .      .,         :@@*: ..**'      .   ." << std::endl;
	outfile << "                       '#o.    .:(@'.@*\"'  ." << std::endl;
	outfile << "               .  .       'bq,..:,@@*'   ,*      .  ." << std::endl;
	outfile << "                          ,p$q8,:@)'  .p*'      ." << std::endl;
	outfile << "                   .     '  . '@@Pp@@*'    .  ." << std::endl;
	outfile << "                    .  . ..    Y7'.'     .  ." << std::endl;
	outfile << "                              :@):." << std::endl;
	outfile << "                             .:@:'." << std::endl;
	outfile << "                           .::(@:." << std::endl;
	outfile.close();
	std::cout << this->_target << " has been shrubbering." << std::endl;
}

const std::string	&ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

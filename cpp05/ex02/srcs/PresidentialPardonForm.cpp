#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("PresidentialPardonForm", 25, 5),
	_target("")
{
	if (Form::verbose)
		std::cout << "Default PresidentialPardonForm constructor (" << *this << ")" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	Form("PresidentialPardonForm", 25, 5),
	_target(target)
{
	if (Form::verbose)
		std::cout << "PresidentialPardonForm constructor (" << *this << ")" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) :
	Form("PresidentialPardonForm", 25, 5),
	_target(src.getTarget())
{
	if (Form::verbose)
		std::cout << "PresidentialPardonForm Copy constructor (" << *this << ")" << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	if (Form::verbose)
		std::cout << "PresidentialPardonForm destructor (" << *this << ")" << std::endl;
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	std::cout << "Can't copy anything with " << rhs.getName() << std::endl;
	if (Form::verbose)
		std::cout << "PresidentialPardonForm Assignement operator (" << *this << ")" << std::endl;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned() || executor.getGrade() > this->getGradeToEx())
		throw PresidentialPardonForm::ExecutionException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

const std::string	&PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}

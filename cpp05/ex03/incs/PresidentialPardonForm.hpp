#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form{

private:
	std::string	_target;

	PresidentialPardonForm(void);

public:

	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	~PresidentialPardonForm(void);

	PresidentialPardonForm & operator=(const PresidentialPardonForm &rhs);

	virtual void		execute(Bureaucrat const & executor) const;
	const std::string	&getTarget(void) const;
};

#endif

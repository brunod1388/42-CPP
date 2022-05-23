#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include "Form.hpp"

class ShrubberyCreationForm : public Form{

private:
	std::string	_target;

	ShrubberyCreationForm(void);

public:

	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm & operator=(const ShrubberyCreationForm &rhs);

	virtual void		execute(Bureaucrat const & executor) const;
	const std::string	&getTarget(void) const;
};

#endif

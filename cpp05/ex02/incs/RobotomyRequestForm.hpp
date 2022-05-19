#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form{

private:
	std::string	_target;

	RobotomyRequestForm(void);

public:

	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	~RobotomyRequestForm(void);

	RobotomyRequestForm & operator=(const RobotomyRequestForm &rhs);

	virtual void		execute(Bureaucrat const & executor) const;
	const std::string	&getTarget(void) const;
};

#endif

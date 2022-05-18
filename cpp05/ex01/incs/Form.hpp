#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "bureau.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToEx;

	Form(void);

	void	checkGrade() const;

public:

	static bool	verbose;

	Form(const std::string name, int gradeToSign, int gradeToEx);
	Form(const Form &src);
	~Form(void);

	Form & operator=(const Form &rhs);

	const std::string	&getName(void) const;
	bool				getSigned(void) const;
	int					getGradeToSign(void) const;
	int					getGradeToEx(void) const;

	bool				beSigned(const Bureaucrat &bob);

	class GradeTooHighException : public std::exception{

	public:
		virtual const char	*what() const throw()
		{
			return "Grade set too high";
		}
	};

	class GradeTooLowException : public std::exception{
	
	public:
		virtual const char	*what() const throw()
		{
			return "Grade set too low";
		}
	};
};

std::ostream &operator<<(std::ostream &os, const Form &rhs);

#endif

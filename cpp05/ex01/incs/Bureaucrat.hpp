/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:51:30 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/18 20:48:57 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <stdexcept>
# include <iostream>

class Bureaucrat {

private:
	static const int	_MaxGrade = 1;
	static const int	_MinGrade = 150;
	const std::string	_name;
	int					_grade;

	void	checkGrade(void) const;

public:

	static bool	verbose;
	
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	~Bureaucrat(void);

	Bureaucrat & operator=(const Bureaucrat &rhs);
	
	const std::string	&getName(void) const;
	int					getGrade(void) const;

	void				increment(int n = 1);
	void				decrement(int n = 1);

	class GradeTooHighException : public std::exception{
	
	public:
		virtual const char	*what() const throw()
		{
			return "Highest grade already";
		}
	};

	class GradeTooLowException : public std::exception{
	
	public:
		virtual const char	*what() const throw()
		{
			return "Lowest Grade already";
		}
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs);

#endif

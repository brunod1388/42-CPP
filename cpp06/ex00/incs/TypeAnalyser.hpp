/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeAnalyser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 01:39:56 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/20 23:50:56 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEANALYSER_HPP
# define TYPEANALYSER_HPP

#include <string>
#include "utils.hpp"
#include <stdexcept>

class TypeAnalyser {

private:

	std::string	_input;
	double		_val;
	t_type		_type;

	void	printChar(void);
	void	printInt(void);
	void	printFloat(void);
	void	printDouble(void);
	void	printSpecial(t_type t);

public:

	TypeAnalyser(void);
	TypeAnalyser(const TypeAnalyser &src);
	~TypeAnalyser(void);

	TypeAnalyser & operator=(const TypeAnalyser &rhs);

	void	analyseInput(char *input);
	void	displayTypes(void);

	class EmptyInput : public std::exception
	{
	public:
		virtual const char	*what(void) const throw()
		{
			return "The input is empty. Please enter something to analyse.";
		}
	};

	class NoTypeInput : public std::exception
	{
	public:
		virtual const char	*what(void) const throw()
		{
			return "The input cannot be analysed. Enter a char, int, float or double.";
		}
	};
};

#endif

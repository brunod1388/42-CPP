/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 01:49:50 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/20 21:07:24 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef UTILS_HPP
# define UTILS_HPP

#include <string>

typedef enum e_type
{
	no_type, char_type, int_type, float_type, double_type
}	t_type;

bool	isIntable(double d);
bool	isFloatable(double d);
bool	isSpecial(std::string s);
bool	isSpecialf(std::string s);

e_type	defineType(char *input);
void	usageMessage(void);

#endif
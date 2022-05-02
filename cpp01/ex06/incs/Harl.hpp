/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 01:05:28 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/02 01:09:12 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <string>

using namespace std;

class Harl {

private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:

	void complain(string level);
};

#endif
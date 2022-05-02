/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 03:38:24 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/02 13:54:31 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

private:

	int					val;
	static const int	fract_bits = 8;

public:

	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const &fix);

	Fixed & operator= (Fixed const &)
}



#endif
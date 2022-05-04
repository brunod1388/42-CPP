/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 03:38:24 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/05 00:17:38 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {

private:

	int					_val;
	static const int	_fractBits = 8;

public:

	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(int const i);
	Fixed(float const f);
	~Fixed(void);

	Fixed & operator= (const Fixed &);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	int		toInt(void) const;
	float	toFloat(void) const;
};

std::ostream & operator<<(std::ostream & os, Fixed const & rhs);

#endif
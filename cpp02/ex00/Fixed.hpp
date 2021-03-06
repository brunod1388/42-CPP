/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 03:38:24 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/04 23:23:40 by brunodeoliv      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

private:

	int					_val;
	static const int	_fractBits = 8;

public:

	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const &src);

	Fixed & operator= (const Fixed &);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
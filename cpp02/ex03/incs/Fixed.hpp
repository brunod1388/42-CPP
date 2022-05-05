/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunodeoliveira <brunodeoliveira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 03:38:24 by brunodeoliv       #+#    #+#             */
/*   Updated: 2022/05/05 01:04:24 by brunodeoliv      ###   ########.fr       */
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

	bool operator< (const Fixed &rhs);
	bool operator<= (const Fixed &rhs);
	bool operator> (const Fixed &rhs);
	bool operator>= (const Fixed &rhs);
	bool operator== (const Fixed &rhs);
	bool operator!= (const Fixed &rhs);

	Fixed operator+ (const Fixed &rhs);
	Fixed operator- (const Fixed &rhs);
	Fixed operator* (const Fixed &rhs);
	Fixed operator/ (const Fixed &rhs);

	Fixed & operator++ ();
	Fixed & operator-- ();
	Fixed operator++ (int);
	Fixed operator-- (int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	int		toInt(void) const;
	float	toFloat(void) const;

	static Fixed min(Fixed & a, Fixed & b);
	static Fixed min(Fixed const & a, Fixed const & b);
	static Fixed max(Fixed & a, Fixed & b);
	static Fixed max(Fixed const & a, Fixed const & b);
};

std::ostream & operator<<(std::ostream & os, Fixed const & rhs);

#endif
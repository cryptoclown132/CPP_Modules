/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:01:00 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/28 20:01:01 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <math.h>

class Fixed
{
	private:
		int					_fixed_point;
		static const int	_frac_bits;	
	public:
		Fixed();
		Fixed(Fixed const &fixed);
		~Fixed();
		Fixed(const int fixed_point);
		Fixed(const float float_point);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat( void ) const;
		int 				toInt( void ) const;
		Fixed				&operator=(Fixed const &fixed);
		bool				operator>(Fixed const &fixed) const;
		bool				operator<(Fixed const &fixed) const;
		bool				operator<=(Fixed const &fixed) const;
		bool				operator>=(Fixed const &fixed) const;
		bool				operator==(Fixed const &fixed) const;
		bool				operator!=(Fixed const &fixed) const;
		Fixed				operator+(Fixed const &fixed) const;
		Fixed				operator-(Fixed const &fixed) const;
		Fixed				operator*(Fixed const &fixed) const;
		Fixed				operator/(Fixed const &fixed) const;
		Fixed				&operator++(void);
		Fixed				&operator--(void);
		Fixed				operator++(int);
		Fixed				operator--(int);
		static Fixed		&min(Fixed &point_1, Fixed &point_2);
		static const Fixed	&min(const Fixed &point_1, const Fixed &point_2);
		static Fixed		&max(Fixed &point_1, Fixed &point_2);
		static const Fixed	&max(const Fixed &point_1, const Fixed &point_2);
};
std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif
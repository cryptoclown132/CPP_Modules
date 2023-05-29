/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:50:07 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/28 19:50:08 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int					_fixed_point;
		static const int	_frac_bits;	
	public:
		Fixed();
		Fixed(Fixed const &fixed);
		~Fixed();
		Fixed	&operator=(Fixed const &fixed);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
};

#endif
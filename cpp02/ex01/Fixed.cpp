/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:59:24 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/28 20:20:10 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_frac_bits = 8;

Fixed::Fixed() : _fixed_point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
		
int	Fixed::getRawBits(void) const{
	return this->_fixed_point;
}
	
void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

Fixed	&Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &fixed)
		return *this;
	this->_fixed_point = fixed.getRawBits();
	return *this;
}

Fixed::Fixed(const int int_point){
	std::cout << "Int constructor called\n";
	this->_fixed_point = int_point << Fixed::_frac_bits;
}
		
Fixed::Fixed(const float float_point){
	std::cout << "Float constructor called\n";
	this->_fixed_point = roundf(float_point * (1 << Fixed::_frac_bits));
}

int	Fixed::toInt(void) const{
	return this->_fixed_point >> Fixed::_frac_bits;
}

float	Fixed::toFloat(void) const{
	return (float)this->_fixed_point / (float)(1 << Fixed::_frac_bits);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	return o << fixed.toFloat();
}

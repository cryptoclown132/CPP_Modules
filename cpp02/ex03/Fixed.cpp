/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:00:50 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/28 20:00:51 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_frac_bits = 8;

Fixed::Fixed() : _fixed_point(0)
{
}

Fixed::Fixed(Fixed const &fixed)
{
	*this = fixed;
}

Fixed::~Fixed()
{
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
	if (this == &fixed)
		return *this;
	this->_fixed_point = fixed.getRawBits();
	return *this;
}

Fixed::Fixed(const int int_point){
	this->_fixed_point = int_point << this->_frac_bits;
}
		
Fixed::Fixed(const float float_point){
	this->_fixed_point = roundf(float_point * (1 << this->_frac_bits));
}

int	Fixed::toInt(void) const{
	return this->_fixed_point >> this->_frac_bits;
}

float	Fixed::toFloat(void) const{
	return (float)this->_fixed_point / (float)(1 << this->_frac_bits);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	return o << fixed.toFloat();
}

bool	Fixed::operator>(Fixed const &fixed) const{
	return this->_fixed_point > fixed.getRawBits();
}

bool	Fixed::operator<(Fixed const &fixed) const{
	return this->_fixed_point < fixed.getRawBits();
}

bool	Fixed::operator==(Fixed const &fixed) const{
	return this->_fixed_point == fixed.getRawBits();
}

bool	Fixed::operator!=(Fixed const &fixed) const{
	return this->_fixed_point != fixed.getRawBits();
}

bool	Fixed::operator<=(Fixed const &fixed) const{
	return this->_fixed_point <= fixed.getRawBits();
}

bool	Fixed::operator>=(Fixed const &fixed) const{
	return this->_fixed_point >= fixed.getRawBits();
}

Fixed	Fixed::operator+(Fixed const &fixed) const{
	return this->toFloat() + fixed.toFloat();
}

Fixed	Fixed::operator-(Fixed const &fixed) const{
	return this->toFloat() - fixed.toFloat();
}

Fixed	Fixed::operator*(Fixed const &fixed) const{
	return this->toFloat() * fixed.toFloat();
}

Fixed	Fixed::operator/(Fixed const &fixed) const{
	return this->toFloat() / fixed.toFloat();
}

Fixed	&Fixed::operator++(void)
{
	++this->_fixed_point;
	return *this;
}

Fixed	&Fixed::operator--(void)
{
	--this->_fixed_point;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->_fixed_point++;
	return tmp;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->_fixed_point--;
	return tmp;
}

Fixed	&Fixed::min(Fixed &point_1, Fixed &point_2)
{
	if (point_1 < point_2)
		return point_1;
	return point_2;
}

const Fixed	&Fixed::min(const Fixed &point_1, const Fixed &point_2)
{
	if (point_1 < point_2)
		return point_1;
	return point_2;
}

Fixed	&Fixed::max(Fixed &point_1, Fixed &point_2)
{
	if (point_1 > point_2)
		return point_1;
	return point_2;
}

const Fixed	&Fixed::max(const Fixed &point_1, const Fixed &point_2)
{
	if (point_1 > point_2)
		return point_1;
	return point_2;
}

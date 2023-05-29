/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:01:13 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/28 20:01:13 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0) , _y(0)
{
}

Point::Point(const float a, const float b) : _x(a) , _y(b)
{
}

Point::Point(Point const &point) : _x(point._x) , _y(point._y)
{
}

Point::~Point()
{
}

Fixed const	&Point::getX(void) const{
	return this->_x;
}

Fixed const	&Point::getY(void) const{
	return this->_y;
}

Point	&Point::operator=(Point const &point)
{
	if (this == &point)
		return *this;
	(Fixed)this->_x = point.getX();
	(Fixed)this->_y = point.getY();
	return *this;
}

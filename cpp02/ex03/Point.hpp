/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:01:20 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/30 13:45:04 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;
	public:
		Point();
		Point(const float a, const float b);
		Point(Point const &point);
		~Point();
		Fixed const	&getX(void) const;
		Fixed const	&getY(void) const;
		Point	&operator=(Point const &point);
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:00:36 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/28 20:00:36 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	w1;
	Fixed	w2;

	w1 = (a.getX() * (c.getX() - a.getY()) + (point.getY() - a.getY()) * (c.getX() - a.getX()) - point.getX() * (c.getY() - a.getY())) /
		((b.getY() - a.getY()) * (c.getX() - a.getX()) - (b.getX() - a.getX()) * (c.getY() - a.getY()));
	w2 = (point.getY() - a.getY() - w1 * (b.getX() - a.getY())) / (c.getY() - a.getY());
	return w1 >= Fixed(0) && w2 >= Fixed(0) && (w1 + w2 ) <= Fixed(1);
}

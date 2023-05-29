/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:01:07 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/28 20:01:07 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point a(0.0, 0.0);
	Point b(5.0, 0.0);
	Point c(0.0, 5.0);
	Point p(6.0, 2.0);

	if (bsp(a, b, c, p))
		std::cout << "Point is part of the triangle." << std::endl;
	else
		std::cout << "Point is not part of the triangle." << std::endl;
}

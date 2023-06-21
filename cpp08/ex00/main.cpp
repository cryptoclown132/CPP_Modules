/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:56:59 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/14 12:56:59 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>


int	main()
{
    std::vector<int> numbers;
	numbers.push_back(23);
	numbers.push_back(45);
	for (int i = 1; i < 1000; i *= 2)
		numbers.push_back(i);
	try
	{
		easyfind(numbers, 5412);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
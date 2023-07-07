/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:47:19 by jkroger           #+#    #+#             */
/*   Updated: 2023/07/01 13:47:19 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cerr << "Not enough arguments.\n";
		return 1;
	}
	PmergeMe a;
	std::vector<int>	vec;
	std::list<int>		lst;
	try
	{
		a.createContainers(vec, lst, argv);
		std::cout << "Before: ";
		a.iterateVec(vec);
		a.sortTime(vec, lst);
		std::cout << "After : ";
		a.iterateVec(vec);
		std::cout << "Time to process a range of " << vec.size() << " elements with std::vector	: " << std::fixed << std::setprecision(5) << a.getTimeVec() << " ms" << std::endl;
		std::cout << "Time to process a range of " << vec.size() << " elements with std::list	: " << a.getTimeLst() << " ms" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

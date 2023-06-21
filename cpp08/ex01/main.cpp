/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:31:27 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/18 18:31:27 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(25);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::vector<int> in;
	for (int i = 0; i < 25; i++)
		in.push_back(i);
	try
	{
		sp.addNumber(in);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::vector<int> out;
	for (int i = 0; i < 12; i++)
		out.push_back(i * 2);
	sp.addNumber(out);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
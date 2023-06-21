/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:59:09 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/11 11:59:09 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
	std::string partition(50, '-');

	std::cout << partition << std::endl;
	std::cout << "INT\n";
	std::cout << partition << std::endl;
	{
		Array<int> a(4);
		std::cout << "a size:" << a.size() << std::endl;
		for (int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
		a[0] = 22;
		a[1] = 543;
		a[2] = -32;
		a[3] = 42;
		try
		{
			std::cout << a[2] << std::endl;
			std::cout << a[6] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		Array<int> b(2);
		b[0] = 10;
		b[1] = 30;
		for (int i = 0; i < b.size(); i++)
			std::cout << b[i] << std::endl;
		b = a;
		for (int i = 0; i < b.size(); i++)
			std::cout << b[i] << std::endl;
	}

	std::cout << partition << std::endl;
	std::cout << "CHAR\n";
	std::cout << partition << std::endl;
	{
		Array<char> a(4);
		std::cout << "a size:" << a.size() << std::endl;
		for (int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
		a[0] = 'a';
		a[1] = 'b';
		a[2] = 'c';
		a[3] = 'd';
		try
		{
			std::cout << a[2] << std::endl;
			std::cout << a[6] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		Array<char> b(2);
		b[0] = '0';
		b[1] = '1';
		for (int i = 0; i < b.size(); i++)
			std::cout << b[i] << std::endl;
		b = a;
		for (int i = 0; i < b.size(); i++)
			std::cout << b[i] << std::endl;
	}

	std::cout << partition << std::endl;
	std::cout << "STRING\n";
	std::cout << partition << std::endl;
	{
		Array<std::string> a(4);
		std::cout << "a size:" << a.size() << std::endl;
		for (int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
		a[0] = "giraffe";
		a[1] = "bear";
		a[2] = "lion";
		a[3] = "dog";
		std::cout << a[2] << std::endl;
		Array<std::string> b(2);
		b[0] = "0";
		b[1] = "1";
		for (int i = 0; i < b.size(); i++)
			std::cout << b[i] << std::endl;
		b = a;
		for (int i = 0; i < b.size(); i++)
			std::cout << b[i] << std::endl;
	}
}

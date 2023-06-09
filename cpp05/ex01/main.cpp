/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:38:30 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/23 12:38:30 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::string partition(50, '-');

	std::cout << partition << std::endl;
	std::cout << "SIGN FORM DONT WORK\n";
	std::cout << partition << std::endl;
	{
		Form a("classic", 23, 54);
		Form b(a);
		Bureaucrat jon("Jon", 123);
		jon.decrementGrade();
		try
		{
			jon.signForm(b);
		}
		catch(std::exception &e)
		{
			std::cerr << e.what();
		}
	}
	std::cout << partition << std::endl;
	std::cout << "SIGN FORM WORKS\n";
	std::cout << partition << std::endl;
	{
		Bureaucrat obama("Obama", -151);
		Form d("important", 21, 220);
		try
		{
			obama.signForm(d);
			obama.signForm(d);
		}
		catch(std::exception &e)
		{
			std::cerr << e.what();
		}
		std::cout << d << std::endl;
	}
	std::cout << partition << std::endl;
	std::cout << "BESIGNED WORKS\n";
	std::cout << partition << std::endl;
	{
		Form c("docs", 120, 123);
		Bureaucrat dave("Dave", 151);
		for (int i = 0; i < 40; i++)
			dave.incrementGrade();
		c.beSigned(dave);
		std::cout << c.getSigned() << std::endl;
	}
	std::cout << partition << std::endl;
	std::cout << "BESIGNED DONT WORK\n";
	std::cout << partition << std::endl;
	{
		Form j("txt", 56, 123);
		Bureaucrat clinton("Clinton", 136);
		try
		{
			j.beSigned(clinton);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what();
		}
		std::cout << j.getSigned() << std::endl;
	}
}
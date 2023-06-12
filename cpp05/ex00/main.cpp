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
	std::cout << "BASIC STUFF\n";
	std::cout << partition << std::endl;
	{
		Bureaucrat	trump("trump", 12);
		std::cout << trump.getName() << std::endl;
		std::cout << trump.getGrade() << std::endl;	
		std::cout << trump;
		Bureaucrat	biden(trump);
		std::cout << biden.getName() << std::endl;
		std::cout << biden.getGrade() << std::endl;	
		std::cout << biden;
	}
	std::cout << partition << std::endl;
	std::cout << "INCREMENT AND DECREMENT\n";
	std::cout << partition << std::endl;
	{
		Bureaucrat ab("Jeff", 123);
		Bureaucrat cd("DEff", 150);
		Bureaucrat ef("mEff", 1);
		try
		{
			ab.decrementGrade();
			cd.decrementGrade();
		}
		catch(std::exception &e)
		{
			std::cerr << e.what();
		}
		try
		{
			ef.incrementGrade();
		}
		catch(std::exception &e)
		{
			std::cerr << e.what();
		}
		std::cout << ab;
		std::cout << cd;
		std::cout << ef;
		cd.incrementGrade();
		std::cout << cd;
	}
	std::cout << partition << std::endl;
	std::cout << "CONSTRUCTOR GRADE OUT OF SCOPE\n";
	std::cout << partition << std::endl;
	{
		try
		{
			Bureaucrat	first("first", 153);
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Bureaucrat	second("second", -2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}		
	}
}

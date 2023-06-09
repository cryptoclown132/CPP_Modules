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
	Bureaucrat ab("Jeff", 123);
	Bureaucrat cd("DEff", 151);
	Bureaucrat ef("mEff", -151);
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
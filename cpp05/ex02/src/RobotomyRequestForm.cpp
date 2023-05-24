/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:05:03 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 21:08:58 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "robo constructor calles\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &robo)
{
	std::cout << "robo coyp constructor calles\n";
	*this = robo;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "robo destructor calles\n";
}		
	
RobotomyRequestForm	RobotomyRequestForm::operator=(RobotomyRequestForm const &robo)
{
	if (this == &robo)
		return *this;
	//whatever
}


void	execut() const;
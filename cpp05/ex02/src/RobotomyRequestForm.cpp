/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:05:03 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/25 20:43:43 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 25, 5, "nothing")
{
	std::cout << "robo constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 25, 5, target)
{
	std::cout << "robo constructor with target called\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &robo)
: AForm(robo.getName(), robo.getGradeSigned(), robo.getGradeExec(), robo.getTarget())
{
	std::cout << "robo coyp constructor called\n";
	*this = robo;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "robo destructor called\n";
}		
	
RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &robo)
{
	if (this == &robo)
		return *this;
	return *this;
	//whatever
}



void	RobotomyRequestForm::execut(Bureaucrat const & executor) const{
	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:05:03 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/12 18:44:04 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45, "nothing")
{
	std::cout << "robo constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 72, 45, target)
{
	std::cout << "robo constructor with target called\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &robo) : AForm(robo)
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
	this->setTarget(robo.getTarget());
	this->setSigned(robo.getSigned());
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (!execRequierments(executor))
		return ;
	std::cout << "some drilling noises...\n";
	srand(time(0));
	int randomValue = rand() % 2;
	if (randomValue == 0)
	{
		std::cout << "The " << getTarget() << " has been robotomized successfully.\n";
		return ;
	}
	else
		std::cout << "The robotomy of " << getTarget() << " failed.\n";
}
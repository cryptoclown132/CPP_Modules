/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:14:37 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/26 17:11:42 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"


Intern::Intern()
{
	std::cout << "Intern constructor called\n";
}

Intern::Intern(Intern const &intern)
{
	std::cout << "Intern copy constructor called\n";
	*this = intern;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called\n";
}

Intern	&Intern::operator=(Intern const &intern)
{
	return *this;	
}

AForm	*Intern::makePresident(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm	*Intern::makeRobot(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm	*Intern::makeShrub(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm	*Intern::makeForm(std::string form_name, std::string target)
{
	std::string	forms[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	AForm* (Intern::*func[]) (std::string) = {&Intern::makePresident, &Intern::makeRobot, &Intern::makeShrub};
	for (int i = 0; i < 3; i++)
	{
		if (form_name == forms[i])
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return (this->*func[i])(target);
		}
	}
	std::cout << "Intern was not aible to create the form\n";
	return NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:10:38 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/26 14:40:56 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon", 25, 5, "nothing")
{
	std::cout << "President constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon", 25, 5, target)
{
	std::cout << "President constructor with target called\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &president) 
	: AForm(president.getName(), president.getGradeSigned(), president.getGradeExec(), president.getTarget())
{
	std::cout << "President copy constructor called\n";
	*this = president;
}		

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "President destructor called\n";
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &president)
{
	if (this == &president)
		return *this;
	this->setTarget(president.getTarget());
	this->setSigned(president.getSigned());
	return *this;
}


void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (!execRequierments(executor))
		return ;
	std::cout << "Informs that " << getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
}
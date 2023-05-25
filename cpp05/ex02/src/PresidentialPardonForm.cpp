/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 21:10:38 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 23:53:15 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "President constructor called\n";
}
		
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &president)
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
	//whatever
}


void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	
}
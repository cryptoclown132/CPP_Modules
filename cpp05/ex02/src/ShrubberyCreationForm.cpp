/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:52:14 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/25 00:36:09 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "shrub constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrub)
{
	std::cout << "shrub copy constructor called\n";
	*this = shrub;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "shrub destructor called\n";	
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &shrub)
{
	if (this == &shrub)
		return *this;
	//whatever
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	std::ofstream	out_file(getTarget() + "_shrubbery");

	
}
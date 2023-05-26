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

#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Intern.hpp"

int main()
{
	Intern jeff;
	AForm *d = jeff.makeForm("PresidentialPardonForm", "kill");
	Bureaucrat büro;
	for (int i = 0; i < 75; i++)
		büro.incrementGrade();
	for (int i = 0; i < 4; i++)
		büro.decrementGrade();
	std::cout << "wtf\n";
	büro.signForm(*d);
	d->execute(büro);
	delete d;
}
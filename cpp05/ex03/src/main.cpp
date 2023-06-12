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
	std::string partition(50, '-');

	Bureaucrat büro("Büro", 75);
	std::cout << partition << std::endl;
	std::cout << "ROBOTOMYREQUESTFORM\n";
	std::cout << partition << std::endl;
	{
		Intern intern;
		AForm *a = intern.makeForm("RobotomyRequestForm", "kill");
		for (int i = 0; i < 75; i++)
			büro.incrementGrade();
		for (int i = 0; i < 4; i++)
			büro.decrementGrade();
		büro.signForm(*a);
		a->execute(büro);
		delete a;
	}
	std::cout << partition << std::endl;
	std::cout << "PRESIDENTIALPARDONFORM\n";
	std::cout << partition << std::endl;
	{
		Intern jeff;
		AForm *d = jeff.makeForm("PresidentialPardonForm", "dance");
		for (int i = 0; i < 75; i++)
			büro.incrementGrade();
		for (int i = 0; i < 4; i++)
			büro.decrementGrade();
		büro.signForm(*d);
		d->execute(büro);
		delete d;
	}
	std::cout << partition << std::endl;
	std::cout << "SHRUBBERYCREATIONFORM\n";
	std::cout << partition << std::endl;
	{
		Intern unknown;
		AForm *c = unknown.makeForm("ShrubberyCreationForm", "excute");
		for (int i = 0; i < 75; i++)
			büro.incrementGrade();
		for (int i = 0; i < 4; i++)
			büro.decrementGrade();
		büro.signForm(*c);
		c->execute(büro);
		delete c;
	}
	std::cout << partition << std::endl;
	std::cout << "INTERN CANT CREATE FORM\n";
	std::cout << partition << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
}

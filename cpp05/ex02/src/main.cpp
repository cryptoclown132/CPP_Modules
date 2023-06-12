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

int main()
{
	std::string partition(50, '-');
	
	Bureaucrat ab("Jeff", 13);
	Bureaucrat cd("DEff", 12);
	Bureaucrat ef("Meff", 5);
	std::cout << partition << std::endl;
	std::cout << "PRESIDENTIALPARDONFORM\n";
	std::cout << partition << std::endl;
	{
		PresidentialPardonForm form("aim");
		PresidentialPardonForm copy(form);
		std::cout << "target: " << copy.getTarget() << "\n";
		PresidentialPardonForm tf = copy;
		std::cout << "target2: " << tf.getTarget() << "\n";
		PresidentialPardonForm presi("Medical insurance");
		presi.beSigned(ef);
		presi.execute(ef);
	}
	std::cout << partition << std::endl;
	std::cout << "ROBOTOMYREQUESTFORM\n";
	std::cout << partition << std::endl;
	{
		RobotomyRequestForm robo("factory");
		robo.beSigned(ab);
		robo.execute(ab);
		robo.execute(cd);
	}
	std::cout << partition << std::endl;
	std::cout << "SHRUBBERYCREATIONFORM\n";
	std::cout << partition << std::endl;
	{
		ShrubberyCreationForm shrub("crab");
		shrub.beSigned(ef);
		shrub.execute(ef);
	}

	std::cout << partition << std::endl;
	std::cout << "FORM NOT SIGNED\n";
	std::cout << partition << std::endl;
	{
		Bureaucrat jong("jong", 89);
		PresidentialPardonForm korea("nuke");
		
			jong.executeForm(korea);
	
	}
	std::cout << partition << std::endl;
	std::cout << "GRADE TO LOW TO EXCUTE\n";
	std::cout << partition << std::endl;
	{
		Bureaucrat macron("MACRON", 89);
		Bureaucrat r("r", 12);
		PresidentialPardonForm france("cheese");
		france.beSigned(r);
		macron.executeForm(france);
	}

	// PresidentialPardonForm p("zass");
	// PresidentialPardonForm c(p);
	// std::cout << c.getGradeExec() << std::endl;
	// std::cout << c.getGradeSigned() << std::endl;
	// std::cout << c.getSigned() << std::endl;
	// std::cout << c.getTarget() << std::endl;
	// std::cout << c.getName() << std::endl;
}

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

int main()
{
	// Bureaucrat ab("Jeff", 123);
	// Bureaucrat cd("DEff", 151);
	// Bureaucrat ef("DEff", -151);
	// ab.decrementGrade();
	// Form ff("classic", 23, 54);
	// ab.signForm(ff);
	// Form ef("name", 21, 222);

	PresidentialPardonForm form("aim");
	PresidentialPardonForm copy(form);
	std::cout << "target: " << copy.getTarget() << "\n";
	PresidentialPardonForm tf = copy;
	std::cout << "target2: " << tf.getTarget() << "\n";
}
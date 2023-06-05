/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:39:26 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/01 13:39:26 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::string partition(50, '-');

	std::cout << partition << std::endl;
	std::cout << "CLAPTRAP\n";
	std::cout << partition << std::endl;
	{
		ClapTrap	clap("clappy");
		clap.attack("scav");
	}

	std::cout << partition << std::endl;
	std::cout << "SCAVTRAP\n";
	std::cout << partition << std::endl;
	{
		ScavTrap	scav("scav");
		scav.attack("clappy");
		scav.takeDamage(1);
		scav.guardGate();
		scav.beRepaired(23);
		std::cout << "Scav energy points: " << scav.getEnergyPoints() << std::endl;
	}
}

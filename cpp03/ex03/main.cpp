/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:21:11 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/05 17:21:11 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	std::string partition(50, '-');

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
	std::cout << partition << std::endl;
	std::cout << "FRAGTRAP\n";
	std::cout << partition << std::endl;
	{
		FragTrap frog;
		frog.highFivesGuys();
		std::cout << "name: " << frog.getName() << std::endl;
		std::cout << "Frag attack damage: " << frog.getAttackDamage() << std::endl;
		frog.attack("forg");
		frog.getAttackDamage();
		FragTrap fraggy("fraggy");
		fraggy.highFivesGuys();
		fraggy.beRepaired(12);
	}
	std::cout << partition << std::endl;
	std::cout << "DIAMONDTRAP\n";
	std::cout << partition << std::endl;
	{
		DiamondTrap diamond("trap");
		diamond.attack("snap");
		diamond.whoAmI();
		std::cout << "name: " << diamond.getDiamondName() << std::endl;
		std::cout << "Attack:" << diamond.getAttackDamage() << std::endl;
		std::cout << "Hit: " << diamond.getHitPoints() << std::endl;
		std::cout << "Energy: " << diamond.getEnergyPoints() << std::endl;
		std::cout << "Clap name: " << diamond.getName() << std::endl;
	}
}

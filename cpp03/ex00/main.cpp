/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:38:42 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/01 13:38:42 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap("clappy");
	ClapTrap	trap("trappy");

	clap.setAttackDamage(2);
	for (int i = 0; i < 11; i++)
		clap.attack("trappy");
	std::cout << "Clap attack damage: " << clap.getAttackDamage() << std::endl;
	//trap.operator=(clap);
	trap.attack("clappy");
	for (int i = 0; i < 3; i++)
	{
		trap.takeDamage(2);
		std::cout << "Trap hit point: " << trap.getHitPoints() << std::endl;
	}
	trap.beRepaired(5);
	std::cout << "Trap hit point: " << trap.getHitPoints() << std::endl;
	std::cout << "Trap energy point: " << trap.getEnergyPoints() << std::endl;
}
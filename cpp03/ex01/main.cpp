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
	ClapTrap	clap("clappy");
	ScavTrap	scav("scav");

	clap.attack("scav");
	scav.attack("clappy");
	scav.guardGate();
	scav.beRepaired(23);
	std::cout << "Scav energy points: " << scav.getEnergyPoints() << std::endl;
}

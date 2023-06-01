/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:54:25 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/01 13:54:25 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	{
	ClapTrap	clap("clappy");
	ScavTrap	scav("scav");

	scav.attack("clappy");
	}

	FragTrap frog;
	frog.highFivesGuys();
	std::cout << "name: " << frog.getName() << std::endl;
	std::cout << "Frag attack damage: " << frog.getAttackDamage() << std::endl;
	frog.attack("forg");
}

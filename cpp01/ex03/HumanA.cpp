/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:59:51 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 19:59:51 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_type) : _name(name), _weapon(&weapon_type)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack() const{
	std::cout << this->getName() << " attacks with their " << this->getWeapon()->get_type() << std::endl;
}

std::string	HumanA::getName() const{
	return this->_name;	
}

Weapon	*HumanA::getWeapon() const{
	return this->_weapon;
}

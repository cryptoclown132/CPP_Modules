/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:00:03 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 20:00:03 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{

}

void	HumanB::attack() const{
	std::cout << this->getName() << " attacks with their " << this->getWeapon()->get_type() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

std::string	HumanB::getName() const{
	return this->_name;
}

Weapon	*HumanB::getWeapon() const{
	return this->_weapon;
}
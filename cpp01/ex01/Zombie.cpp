/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:59:21 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 19:59:21 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::annouce(void)
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << "Zombie created\n";
}

Zombie::~Zombie(void)
{
	std::cout << this->getName() << " got eliminated!\n";	
}

std::string	Zombie::getName() const{
	return this->_name;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

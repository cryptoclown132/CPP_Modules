/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:58:52 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 19:58:52 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::annouce(void)
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string z_name) : _name(z_name)
{
	std::cout << this->getName() << " created\n";
}

Zombie::~Zombie(void)
{
	std::cout << this->getName() << " got eliminated!\n";	
}

std::string	Zombie::getName() const{
	return this->_name;
}

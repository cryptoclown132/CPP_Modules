/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:18:50 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/05 09:18:57 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _wrong_type("default wrong animal")
{
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &wrong_animal)
{
	std::cout << "WrongAnimal copy constructor called\n";
	*this = wrong_animal;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &wrong_animal)
{
	if (this == &wrong_animal)
		return *this;
	this->_wrong_type = wrong_animal.getWrongType();
	return *this;
}

std::string		WrongAnimal::getWrongType(void) const{
	return this->_wrong_type;
}

void	WrongAnimal::setWrongType(std::string wrong_type)
{
	this->_wrong_type = wrong_type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}

void	WrongAnimal::makeWrongSound()
{
	std::cout << "Screams in wrong animal\n";
}

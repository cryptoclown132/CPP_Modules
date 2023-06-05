/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:26:22 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/05 09:26:22 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria() : _type("Default materia")
{
	std::cout << "AMateria constructor called\n";
}

AMateria::AMateria(AMateria const &amateria)
{
	std::cout << "AMateria copy constructor called\n";
	*this = amateria;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called\n";
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria string constructor called\n";
}

AMateria	&AMateria::operator=(AMateria const &amateria)
{
	if (this == &amateria)
		return *this;
	this->_type = amateria.getType();
	return *this;
}

std::string const &AMateria::getType(void) const{
	return this->_type;
}

void	AMateria::setType(std::string amateria)
{
	this->_type = amateria;
}

void		AMateria::use(ICharacter& target)
{
	std::cout << "* " << target.getName() << "makes default use *\n";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:26:39 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/05 09:26:39 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor called\n";
}

Cure::Cure(Cure const &cure) : AMateria(cure)
{
	std::cout << "Cure copy constructor called\n";
	*this = cure;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called\n";
}

Cure::Cure(std::string const & type) : AMateria(type)
{
	std::cout << "Cure string constructor called\n";
}

Cure	&Cure::operator=(Cure const &cure)
{
	if (this == &cure)
		return *this;
	this->_type = cure.getType();
	return *this;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}

AMateria*	Cure::clone() const
{
	return new Cure();
}

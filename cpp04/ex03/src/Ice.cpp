/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:26:45 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/05 09:26:45 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice() : AMateria()
{
	std::cout << "Ice constructor called\n";
}

Ice::Ice(Ice const &ice)
{
	std::cout << "Ice copy constructor called\n";
	*this = ice;
}

Ice::Ice(std::string const & type) : AMateria(type)
{
	std::cout << "Ice string constructor called\n";
}

Ice::~Ice()
{
	std::cout << "Ice destructor called\n";
}
	
Ice	&Ice::operator=(Ice const &ice)
{
	if (this == &ice)
		return *this;
	return *this;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

AMateria	*Ice::clone() const{
	return new Ice();
}

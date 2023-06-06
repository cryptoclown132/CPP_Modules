/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:19:05 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/06 17:21:54 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(WrongCat const &wrong_cat) : WrongAnimal(wrong_cat)
{
	std::cout << "WrongCat copy constructor called\n";
	*this = wrong_cat;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat constructor with arg called\n";
}

WrongCat	&WrongCat::operator=(WrongCat const &wrong_cat)
{
	if (this == &wrong_cat)
		return *this;
	this->_wrong_type = wrong_cat.getWrongType();
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}

void	WrongCat::makeWrongSound()
{
	std::cout << "Wrong meow, meow ...\n";
}

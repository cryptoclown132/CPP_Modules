/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:11:44 by jkroger           #+#    #+#             */
/*   Updated: 2023/07/01 12:26:03 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called\n";
}

Cat::Cat(Cat const &cat) : Animal(cat)
{
	std::cout << "Cat copy constructor called\n";
	*this = cat;
}

Cat::Cat(std::string name) : Animal(name)
{
	std::cout << "Cat copy constructor with arg called\n";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

Cat	&Cat::operator=(Cat const &cat)
{
	if (this == &cat)
		return *this;
	this->_type = cat.getType();
	return *this;
}

void	Cat::makeSound() const{
	std::cout << "Meow, Meow ...\n";
}

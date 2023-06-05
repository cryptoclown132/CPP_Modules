/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:17:32 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/05 09:17:39 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called\n";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &cat)
{
	std::cout << "Cat copy constructor called\n";
	*this = cat;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called\n";
}

Cat	&Cat::operator=(Cat const &cat)
{
	if (this == &cat)
		return *this;
	this->_type = cat.getType();
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdeas(i, cat._brain->getIdeas(i));
	return *this;
}

void	Cat::makeSound() const{
	std::cout << "Meow, Meow ...\n";
}

void	Cat::setIdeas(int index, std::string idea)
{
	this->_brain->setIdeas(index, idea);
}

std::string	Cat::getIdeas(int index)
{
	return this->_brain->getIdeas(index);
}

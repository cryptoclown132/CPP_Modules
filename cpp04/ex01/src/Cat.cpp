/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:17:32 by jkroger           #+#    #+#             */
/*   Updated: 2023/07/01 12:26:40 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called\n";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &cat) : Animal(cat)
{
	std::cout << "Cat copy constructor called\n";
	this->_brain = NULL;
	*this = cat;
}

Cat::Cat(std::string name) : Animal(name)
{
	std::cout << "Cat copy constructor with arg called\n";
	this->_brain = new Brain();
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
	if (this->_brain != NULL)
		delete this->_brain;
	this->_brain = new Brain(*cat._brain);
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

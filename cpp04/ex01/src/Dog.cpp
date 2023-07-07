/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:17:58 by jkroger           #+#    #+#             */
/*   Updated: 2023/07/01 12:26:52 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor called\n";
	this->_brain = new Brain();
}

Dog::Dog(Dog const &dog) : Animal(dog)
{
	std::cout << "Dog copy constructor called\n";
	this->_brain = NULL;
	*this = dog;
}

Dog::Dog(std::string name) : Animal(name)
{
	std::cout << "Dog copy constructor with arg called\n";
	this->_brain = new Brain();
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called\n";
}

Dog	&Dog::operator=(Dog const &dog)
{
	if (this == &dog)
		return	*this;
	this->_type = dog.getType();
	if (this->_brain != NULL)
		delete this->_brain;
	this->_brain = new Brain(*dog._brain);
	return	*this;
}

void	Dog::makeSound() const{
	std::cout << "Wuff, Wuff ...\n";
}

void	Dog::setIdeas(int index, std::string idea)
{
	this->_brain->setIdeas(index, idea);
}

std::string	Dog::getIdeas(int index)
{
	return this->_brain->getIdeas(index);
}

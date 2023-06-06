/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:12:03 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/06 17:10:28 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called\n";
}

Dog::Dog(Dog const &dog) : Animal(dog)
{
	std::cout << "Dog copy constructor called\n";
	*this = dog;
}

Dog::Dog(std::string name) : Animal(name)
{
	std::cout << "Dog copy constructor with arg called\n";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

Dog	&Dog::operator=(Dog const &dog)
{
	if (this == &dog)
		return	*this;
	this->_type = dog.getType();
	return	*this;
}

void	Dog::makeSound() const{
	std::cout << "Wuff, Wuff ...\n";
}
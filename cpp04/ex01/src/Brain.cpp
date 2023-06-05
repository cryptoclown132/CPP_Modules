/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:17:07 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/05 09:17:07 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called\n";
}


Brain::Brain(Brain const &brain)
{
	std::cout << "Brain copy constructor called\n";
	*this = brain;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

// Brain	&Brain::operator=(Brain const &brain)
// {
// 	if (this == &brain)
// 		return *this;
// 	for (int i = 0; i < 100; i++)
// 		this->_ideas[i] = brain._ideas[i];
// 	return *this;
// }

void	Brain::setIdeas(int index, std::string idea)
{
	if (index > 99 || index < 0)
	{
		std::cout << "Wrong index has to be between 0 and 99!\n";
		return ;
	}
	this->_ideas[index] = idea;
}
		
std::string	Brain::getIdeas(int index)
{
	if (index > 99 || index < 0)
	{
		std::cout << "Wrong index has to be between 0 and 99!\n";
		return NULL;
	}
	return this->_ideas[index];
}






Brain & Brain::operator=(Brain const &rhs) {

	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

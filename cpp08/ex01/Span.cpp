/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 13:44:36 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/17 13:44:36 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(Span const &span)
{
	*this = span;
}
		
Span::Span(unsigned int N) : _N(N) {}

Span::~Span() {}

Span			&Span::operator=(Span const &span)
{
	if (this == &span)
		return *this;
	_N	= span.getAmount();
	_arr = span.getArray();
	return *this;
}

unsigned int	Span::getAmount() const{
	return _N;
}

std::vector<int>	Span::getArray() const{
	return _arr;
}

void	Span::addNumber(int i)
{
	if (_arr.size() >= _N)
		throw ContainerFullException();
	_arr.push_back(i);
}

void	Span::addNumber(std::vector<int> v)
{
	if (_arr.size() + v.size() > _N)
		throw ContainerFullException();
	_arr.insert(_arr.end(), v.begin(), v.end());
}

int	Span::longestSpan()
{
	if (_arr.size() <= 1)
		throw NotEnoughElementsException();
	return *std::max_element(_arr.begin(), _arr.end()) - *std::min_element(_arr.begin(), _arr.end());
}

int	Span::shortestSpan()
{
	if (_arr.size() <= 1)
		throw NotEnoughElementsException();
	int	shortest_span = longestSpan();
	for (std::vector<int>::const_iterator it = _arr.begin(); it != _arr.end(); ++it)
	{
		for (std::vector<int>::const_iterator it_2 = _arr.begin(); it_2 != _arr.end(); ++it_2)
		{
			if (it == it_2)
				continue;
			if (std::abs(*it - *it_2) < shortest_span)
				shortest_span = std::abs(*it - *it_2);
		}
	}
	return shortest_span;
}

const char	*Span::ContainerFullException::what() const throw(){
	return "Container is already full!";
}

const char	*Span::NotEnoughElementsException::what() const throw(){
	return "Not enough elements in Container for span!";
}

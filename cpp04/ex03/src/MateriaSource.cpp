/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:26:57 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/08 17:30:32 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource() : _name("Default materia_source")
{
	std::cout << "MateriaSource constructor called\n";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(std::string type) : _name(type)
{
	std::cout << "MateriaSource string constructor called\n";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;

}
		
MateriaSource::MateriaSource(MateriaSource const &materia_source)
{
	std::cout << "MateriaSource copy constructor called\n";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	*this = materia_source;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called\n";
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i]; 
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &materia_source)
{
	if (this == &materia_source)
		return *this;
	_name = materia_source.getName();
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i]; 
		if (materia_source._inventory[i])
			_inventory[i] = materia_source._inventory[i]->clone();
		else 
			_inventory[i] = NULL;
	}
	return *this;
}

std::string const	&MateriaSource::getName() const{
	return this->_name;
}

void	MateriaSource::setName(std::string name)
{
	this->_name = name; 
}

AMateria	*MateriaSource::getMateria(int index) const{
	if (index >= 0 && index <= 3)
		return this->_inventory[index];
	return NULL;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Iventory full!\n";
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
			return this->_inventory[i]->clone();
	}
	return 0;
}